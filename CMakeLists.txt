cmake_minimum_required(VERSION 3.22)

project(3divi_context)

add_library(3divi_context SHARED "src/context.cpp")
target_include_directories(3divi_context PRIVATE "src")

add_executable(use_context "src/main.cpp")
target_sources(use_context 
    PRIVATE "src/context.cpp"
    PRIVATE "src/scalar.cpp"
)
