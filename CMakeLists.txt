cmake_minimum_required(VERSION 3.16)
project(Yanagi-server VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- version -------------------------------------------------
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

add_compile_definitions(PROJECT_VERSION="${PROJECT_VERSION}")
# -------------------------------------------------------------

# Yanagi-server
add_executable(yanagi-server
    src/main.cpp
)

# Include directories for our code + ImGui
target_include_directories(Yanagi-server PRIVATE
    include
)

# Linux defaults (dl, pthread)
target_link_libraries(Yanagi-server dl pthread)

# Output to bin/
set_target_properties(Yanagi-server PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
