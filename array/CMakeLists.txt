project (algorithm)
cmake_minimum_required(VERSION 3.20)

include_directories( ${CMAKE_SOURCE_DIR} )

include (${CMAKE_CURRENT_SOURCE_DIR}/)

add_executable( ${PROJECT_NAME} 
                main.cpp
                ${}
              )