set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(rive-cpp)

include_directories(include)
file(GLOB main src/*.hpp src/*.cpp)

add_compile_definitions(_USE_MATH_DEFINES=1)

add_library(rive-cpp ${main})
target_link_libraries(rive-cpp PRIVATE)

