#include <iostream>
#include "utility/cpp_parsing/cpp_parsing.hpp"
#include "utility/meta_utils/meta_utils.hpp"
#include "utility/user_input/user_input.hpp"

#include "meta_program/meta_program.hpp"
#include "custom_type.hpp"

// what did we just do, well something important in that now the meta program can be globally available. which is great,
// potentially can we make it a submodule at all? Next step now that this is the case we want to be able to serialize
// bigger and bigger things, such as the whole transform class, if we could do that it'd be a great step. Either way I
// don't think this was a waste of time. So now what's the next step? Well I want to be able to run a server with a
// particular sequence of packets and then see what it would output in terms of client packets, and then I want to use
// those outgoing packets to simulate one tick of empty blah and then reconcile over many frames and that gives me a way
// to test that and then I can fix the flag issue.

int main() {

    auto settings = meta_utils::CustomTypeExtractionSettings("src/custom_type.hpp");

    meta_utils::register_custom_types_into_meta_types(settings);

    // NOTE: another question is how private/public is handled in the context of serialization.

    // this needs to know about the concrete types I believe now.
    meta_utils::StringInvokerGenerationSettingsForHeaderSource basic_math_settings("src/basic_math.hpp",
                                                                                   "src/basic_math.cpp", true, true);
    meta_utils::generate_string_invokers_program_wide({basic_math_settings},
                                                      meta_utils::meta_types.get_concrete_types());

    // TODO: next step is to be able to automatically create serializers for types I want.
    std::cout << "Hello, World!" << std::endl;

    // TODO: next step is we need struct support, but the good thing is that structs are just special classes where all
    // things are public by default and so when taking a string represeting a struct we can have the logic that parses
    // that handle when it's a struct.

    // auto pr = cpp_parsing::enum_class_def_parser->parse(
    //     " enum class PacketType : uint8_t { MOUSE_UPDATE, GAME_UPDATE, SOUND_UPDATE, }; ");
    //
    // // std::cout << pr.to_string() << std::endl;
    //
    // auto cpr = cpp_parsing::clean_parse_result(pr);
    // std::cout << cpr.to_string() << std::endl;

    // meta_program::MetaProgram meta_program(meta_utils::meta_types.get_concrete_types());
    // auto sub = meta_program.deferred_invoker_that_returns_double("subtract(3, 4)");

    // std::cout << "subtract: " << sub.value()() << std::endl;

    // TODO: if a class has no fixed size or dynamic storage then its serialization can be very simplified.

    B b(13, {3, 3, 3});
    X x(42, "hello world", {1, 2, 3, 4, 5, 6}, b, true);
    X x2(36, "goobye world", {6, 5, 4, 3, 2, 1}, b, false);
    Y y("holder", 99, A::TWO, {x, x2});

    std::cout << meta_program->X_to_string(x) << std::endl;

    auto sx = meta_program->serialize_X(x);
    auto x_undo = meta_program->deserialize_X(sx);

    std::cout << text_utils::format_nested_brace_string_recursive(meta_program->X_to_string(x_undo)) << std::endl;

    std::cout << meta_program->Y_to_string(y) << std::endl;
    auto sy = meta_program->serialize_Y(y);
    auto y_undo = meta_program->deserialize_Y(sy);
    std::cout << meta_program->Y_to_string(y_undo) << std::endl;

    std::cout << "3" << std::endl;

    ClassWithUnorderedMap class_with_unordered_map;
    class_with_unordered_map.map.emplace(0, x);
    class_with_unordered_map.map.emplace(1, x2);

    std::cout << meta_program->ClassWithUnorderedMap_to_string(class_with_unordered_map) << std::endl;
    auto sclass_with_unordered_map = meta_program->serialize_ClassWithUnorderedMap(class_with_unordered_map);
    auto class_with_unordered_map_undo = meta_program->deserialize_ClassWithUnorderedMap(sclass_with_unordered_map);
    std::cout << meta_program->ClassWithUnorderedMap_to_string(class_with_unordered_map_undo) << std::endl;

    std::cout << "4" << std::endl;

    // startfold instagib game state

    InstagibCTFGameState game_state;
    game_state.id = 1;

    // Create first character
    InstagibCharacterState char1;
    char1.client_id = 101;
    char1.physics_state = {1};
    char1.camera_state = {0, 0, 0};
    char1.is_dead = false;
    char1.has_flag = false;
    game_state.character_states.push_back(char1);

    // Create second character
    InstagibCharacterState char2;
    char2.client_id = 102;
    char2.physics_state = {2};
    char2.camera_state = {90, 0, 0};
    char2.is_dead = false;
    char2.has_flag = true;
    game_state.character_states.push_back(char2);

    // Create third character
    InstagibCharacterState char3;
    char3.client_id = 103;
    char3.physics_state = {3};
    char3.camera_state = {45, 45, 0};
    char3.is_dead = true;
    char3.has_flag = false;
    game_state.character_states.push_back(char3);

    std::cout << meta_program->InstagibCTFGameState_to_string(game_state) << std::endl;
    auto sgame_state = meta_program->serialize_InstagibCTFGameState(game_state);
    auto game_state_undo = meta_program->deserialize_InstagibCTFGameState(sgame_state);
    std::cout << meta_program->InstagibCTFGameState_to_string(game_state_undo) << std::endl;

    std::cout << "after" << std::endl;
    std::cout << text_utils::format_nested_brace_string_recursive(
                     meta_program->InstagibCTFGameState_to_string(game_state))
              << std::endl;
    std::cout << text_utils::format_nested_brace_string_recursive(
                     meta_program->InstagibCTFGameState_to_string(game_state_undo))
              << std::endl;

    // endfold

    std::cout << "5" << std::endl;

    // startfold test optional
    ClassWithOptional class_with_optional;
    class_with_optional.opt_x = x;

    std::cout << meta_program->ClassWithOptional_to_string(class_with_optional) << std::endl;
    auto sclass_with_optional = meta_program->serialize_ClassWithOptional(class_with_optional);
    auto class_with_optional_undo = meta_program->deserialize_ClassWithOptional(sclass_with_optional);
    std::cout << meta_program->ClassWithOptional_to_string(class_with_optional_undo) << std::endl;

    ClassWithOptional empty_class_with_optional;
    empty_class_with_optional.opt_x = std::nullopt;

    std::cout << meta_program->ClassWithOptional_to_string(empty_class_with_optional) << std::endl;
    auto sempty_class_with_optional = meta_program->serialize_ClassWithOptional(empty_class_with_optional);
    auto empty_class_with_optional_undo = meta_program->deserialize_ClassWithOptional(sempty_class_with_optional);
    std::cout << meta_program->ClassWithOptional_to_string(empty_class_with_optional_undo) << std::endl;

    // endfold

    std::cout << "6" << std::endl;

    // interactive_invoker();

    return 0;
}
