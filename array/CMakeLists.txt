project (algorithm)
cmake_minimum_required(VERSION 3.20)

include_directories( ${CMAKE_SOURCE_DIR} )

include (${CMAKE_CURRENT_SOURCE_DIR}/rem_dup/rem_dup.cmake)

add_executable( ${PROJECT_NAME} 
                main.cpp
                ${REM_DUP}
              )