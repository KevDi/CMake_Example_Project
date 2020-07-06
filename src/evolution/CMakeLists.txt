add_library(evolution "")

target_sources(evolution
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src/evolution.cpp
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/evolution/evolution.hpp
  )
target_include_directories(evolution
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  )