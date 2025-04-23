# Install script for directory: C:/Users/Probook/Desktop/scgms/scgms-release/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SmartCGMS")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/scgms/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/approx/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/controllers/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/data/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/drawing/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/drawing_v2/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/icarus/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/log/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/matlab/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/metric/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/model/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/native/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/signal/cmake_install.cmake")
  include("C:/Users/Probook/Desktop/scgms/scgms-release/build/core/stochastic/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "C:/Users/Probook/Desktop/scgms/scgms-release/build/core/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
