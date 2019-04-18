# Get all the C++ files composing the hello_world application
file(GLOB hello_world_FILES ${CMAKE_CURRENT_SOURCE_DIR}/hello_world/*.cpp)

# Create an executable using these files
add_executable(hello_world ${hello_world_FILES})

# Link the hello library to this executable
target_link_libraries(hello_world PUBLIC hello)
