cmake_minimum_required(VERSION 3.10)

# set the project name
project(Cmosters)

# add the executable
add_executable(Cmosters ./structs.hpp ./read_data.cpp ./save.cpp ./main.cpp ./Player.cpp ./Enemy.cpp)
