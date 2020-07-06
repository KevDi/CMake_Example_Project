cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(structure-demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BOOST_ROOT "external/boost")
set(BOOST_LIBRARYDIR "boost/stage/lib")

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY
  ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
  ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
  ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})


find_package(Boost 1.70 REQUIRED COMPONENTS regex)

add_subdirectory(src)

add_subdirectory(external/conversion)
add_subdirectory(external/gtest)

enable_testing()
add_subdirectory(tests)