add_library(parser "")

target_sources(parser
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.cpp
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include/parser/parser.hpp
  )
target_include_directories(parser
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  )