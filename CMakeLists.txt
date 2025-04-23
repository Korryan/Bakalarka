cmake_minimum_required(VERSION 3.10)

# Definice projektu s aktivovaným C++ a požadovaným standardem (C++20)
project(SmartCGMS LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include_directories(${CMAKE_SOURCE_DIR}/deps/Eigen3)

# Pokud opravdu potřebujete Qt6, explicitně nalezneme potřebné komponenty.
# V tomto případě hledáme moduly Core a Svg, aby se odstranily chyby při linkování.
find_package(Qt6 COMPONENTS Core Svg REQUIRED)

# Přidáme podsložky projektu
add_subdirectory(common)
add_subdirectory(core)
add_subdirectory(tester)


#if(NOT DEFINED BUILD_CORE_ONLY OR NOT BUILD_CORE_ONLY)
#    add_subdirectory(console)
#    add_subdirectory(desktop)
#endif()

#add_subdirectory(wrappers)
