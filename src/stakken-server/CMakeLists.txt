add_executable(stakken-server
    "./main.cpp"
)

target_link_libraries(stakken-server
    stakken-core
)