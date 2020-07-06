add_library(initial "")

target_sources(initial
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/src/initial.cpp
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}//include/initial/initial.hpp
  )
target_include_directories(initial
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}//include
  )

target_link_libraries(initial PRIVATE Boost::regex)