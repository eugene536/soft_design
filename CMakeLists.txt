project(twitter_hashtag)
cmake_minimum_required(VERSION 3.2)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g -fsanitize=thread")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g -fsanitize=address")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g ")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O2 -g")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ggdb")

#add_definitions(-D_LINUX)
#add_definitions(-DNDEBUG)
#add_definitions(-D_GLIBCXX_DEBUG)

file(GLOB_RECURSE SOURCE_FILES source/*.cpp tests/*.cpp)
file(GLOB_RECURSE HEADER_FILES include/*.h tests/*.h)

include_directories(
    include
    "3dparty/chilkat/include"
    "3dparty/json_spirit/json_spirit" )

if ("$ENV{GTEST}" STREQUAL "y")
    message("!Gtests're enabled!")

    find_package(GTest REQUIRED)

    include_directories(tests)
    add_definitions(-D_GTEST)
endif ()

link_directories(
    "${PROJECT_SOURCE_DIR}/3dparty/chilkat/lib"
    "${PROJECT_SOURCE_DIR}/3dparty/json_spirit/json_spirit" )

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

if ("$ENV{GTEST}" STREQUAL "y")
    target_link_libraries(${PROJECT_NAME} ${GTEST_BOTH_LIBRARIES} gmock)
endif ()

target_link_libraries(${PROJECT_NAME} chilkat-9.5.0 resolv pthread json_spirit)


#if ("${BENCHMARK}" STREQUAL "y")
#    target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
#endif()


#if ("$ENV{BENCHMARK}" STREQUAL "y")

#    set(Boost_USE_STATIC_LIBS OFF)
#    set(Boost_USE_MULTITHREADED ON)
#    set(Boost_USE_STATIC_RUNTIME OFF)

#    find_package(Boost COMPONENTS regex)

#    if(Boost_FOUND)
#        include_directories(${Boost_INCLUDE_DIRS})
#        add_definitions(-DBENCHMARK)
#        set(BENCHMARK "y")
#    else ()
#        message("boost not found")
#    endif ()
#endif ()
