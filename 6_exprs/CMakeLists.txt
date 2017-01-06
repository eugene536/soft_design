project(hw6)
cmake_minimum_required(VERSION 3.2)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g -fsanitize=thread")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g -ggdb -fsanitize=address")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pedantic -Wall -Wextra -Wno-char-subscripts -Wno-unused-result -g ")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3 -g -march=native -ffast-math -mtune=native")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ggdb")

#add_definitions(-D_LINUX)
#add_definitions(-DNDEBUG)
#add_definitions(-D_GLIBCXX_DEBUG)

set(SOURCE_FILES source/main.cpp source/tokenizer.cpp source/parser_visitor.cpp source/operation_token.cpp source/calc_visitor.cpp)

set(HEADER_FILES include/token.h include/token_visitor.h include/number_token.h include/brace_token.h include/operation_token.h include/tokenizer.h include/parser_visitor.h include/calc_visitor.h)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

include_directories( include )

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
