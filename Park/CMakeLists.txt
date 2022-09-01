# The minimum version of CMake Required 
cmake_minimum_required(VERSION 3.10)

# Change project name
project (Factory) 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
    Animals
    Trees
    Waters
    Factories
    Observers
    ../
)

# CMake will create your library, add the cpp files needed
add_library(factory_lib STATIC Park.cpp Observers/ParkRanger.cpp Animals/dog.cpp Animals/cat.cpp Factories/ParkFactory.cpp Factories/BalancedFactory.cpp 
            Factories/RandomFactory.cpp Factories/TreeFactory.cpp Trees/Tree.cpp Trees/Birch.cpp Trees/Cedar.cpp)
set_target_properties(factory_lib  PROPERTIES PUBLIC_HEADER "type.h")


# CMake will create executable add the cpp files needed
add_executable(${PROJECT_NAME}_trial main.cpp)


# Cmake will link against the libraries in final step
target_link_libraries(${PROJECT_NAME}_trial factory_lib)

#install(TARGETS <library_name> DESTINATION lib PUBLIC_HEADER DESTINATION include)
#install(TARGETS ranger_lib cell DESTINATION lib PUBLIC_HEADER DESTINATION include)