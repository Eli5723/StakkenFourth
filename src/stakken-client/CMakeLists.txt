find_package(SDL2 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

add_executable(stakken-client
    "./main.cpp"
    "./gl3w.c"
)

target_link_libraries(stakken-client
    stakken-core
    glm::glm-header-only
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)


