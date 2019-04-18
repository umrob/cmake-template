# Get all the C++ files composing the hello library
file(GLOB hello_FILES ${CMAKE_CURRENT_SOURCE_DIR}/hello/*.cpp)

# Create a shared library using these files
add_library(hello SHARED ${hello_FILES})

# Define the include directory for the library
target_include_directories(hello PUBLIC ${CMAKE_SOURCE_DIR}/include/hello)

# Set the C++ standard to use for this library
target_compile_features(hello PUBLIC cxx_std_11)

# Link with the fmt library
target_link_libraries(hello fmt::fmt)
