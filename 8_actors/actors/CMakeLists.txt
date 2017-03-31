project(actors)
cmake_minimum_required(VERSION 3.2)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g -fsanitize=thread")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g -fsanitize=address")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g ")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O2 -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ggdb")

#add_definitions(-D_LINUX)
#add_definitions(-DNDEBUG)
#add_definitions(-D_GLIBCXX_DEBUG)

file(GLOB_RECURSE SOURCE_FILES source/*.cpp)
file(GLOB_RECURSE HEADER_FILES include/*.h)

include_directories(
    include
    "/home/eugene/university/libs/actor-framework/build/include"
)

link_directories("/home/eugene/university/libs/actor-framework/build/lib")

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(${PROJECT_NAME} caf_core pthread)
