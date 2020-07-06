add_executable(automata main.cpp)

target_link_libraries(automata
    PRIVATE
        conversion
        evolution
        initial
        io
        parser
    )