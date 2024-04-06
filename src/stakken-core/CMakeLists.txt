add_library(stakken-core SHARED
    "./Game/Player.cpp"
    "./Game/Player.hpp"
)   

target_include_directories(stakken-core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)