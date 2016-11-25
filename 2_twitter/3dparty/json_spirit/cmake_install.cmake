# Install script for directory: /home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_error_position.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_reader.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_reader_template.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_stream_reader.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_utils.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_value.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_writer.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_writer_template.h"
    "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/json_spirit_writer_options.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/libjson_spirit.a")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_spirit/cmake_install.cmake")
  include("/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_demo/cmake_install.cmake")
  include("/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_headers_only_demo/cmake_install.cmake")
  include("/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_map_demo/cmake_install.cmake")
  include("/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/json_test/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/eugene/university/4course/soft_design/2_twitter/twitter_hashtag/3dparty/json_spirit/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
