add_library(io "")

target_sources(io
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src/io.cpp
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}//include/io/io.hpp
  )
target_include_directories(io
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  )