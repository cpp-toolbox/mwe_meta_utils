#ifndef CUSTOM_TYPE_HPP
#define CUSTOM_TYPE_HPP

#include <cstdint>
#include <optional>
#include <string>
#include <vector>
#include <array>
#include <unordered_map>

using MyVectorInt = std::vector<int>;
using MyArrayOfFloats = std::array<float, 4>;

enum class A : uint8_t {
    ONE,
    TWO,
    THREE,
};

struct B {
    int val;
    MyVectorInt mvi;
    std::array<float, 3> position = {6, 6, 6};
    std::string s = "default_str";
};

// using Position = std::array<float, 3>;

struct X {
  public:
    int val;
    std::string text;
    std::vector<int> numbers;
    B b;
    bool is_it;
};

struct Y {
  public:
    std::string name;
    int age;
    A thing;
    std::vector<X> xs;
};

struct ClassWithUnorderedMap {
    std::unordered_map<unsigned int, X> map;
};

struct ClassWithOptional {
    std::optional<X> opt_x;
};

struct InstagibCTFCharacterLeaderboardState {
    unsigned int flag_captures;
    unsigned int kills;
    unsigned int deaths;
    double sniper_accuracy;
};

struct InstagibCTFLeaderboardState {
    std::unordered_map<unsigned int, std::unordered_map<unsigned int, InstagibCTFCharacterLeaderboardState>>
        team_to_client_id_to_instagib_ctf_character_leaderboard_state;
};

struct CameraState {
    double yaw;
    double pitch;
    double last_mouse_position_x;
    double last_mouse_position_y;
    // NOTE: used for reconciliation
    unsigned int last_applied_camera_update_data_id_used_to_produce_this_state;
};

struct PhysicsState {
    unsigned int last_applied_physics_update_data_id_to_produce_this_state;
};

struct FreeForAllCharacterState {
    unsigned int client_id;
    PhysicsState physics_state;
    CameraState camera_state;
    bool is_dead;
};

struct InstagibCharacterState {
    unsigned int client_id;
    PhysicsState physics_state;
    CameraState camera_state;
    bool is_dead;
    bool has_flag;
};

struct InstagibCTFGameState {
    unsigned int id;
    std::vector<InstagibCharacterState> character_states;
};

#endif // CUSTOM_TYPE_HPP
