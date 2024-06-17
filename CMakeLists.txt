cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Collect all source files from different directories
file(GLOB FUNCIONARIOS_SOURCES "Funcionarios/*.cpp")
file(GLOB FUNCELETRICO_SOURCES "Funcionarios/FuncEletrico/*.cpp")
file(GLOB FUNCMECANICO_SOURCES "Funcionarios/FuncMecanico/*.cpp")
file(GLOB MATERIAIS_SOURCES "Materiais/Material/*.cpp")
file(GLOB MATESTOQUE_SOURCES "Materiais/MatEstoque/*.cpp")
file(GLOB MATELETRICO_SOURCES "Materiais/MatEletrico/*.cpp")
file(GLOB MATMECANICO_SOURCES "Materiais/MatMecanico/*.cpp")


# Combine all source files into a single list
set(SOURCES
    ${FUNCIONARIOS_SOURCES}
    ${FUNCELETRICO_SOURCES}
    ${FUNCMECANICO_SOURCES}
    ${MATERIAIS_SOURCES}
    ${MATESTOQUE_SOURCES}
    ${MATELETRICO_SOURCES}
    ${MATMECANICO_SOURCES}
    main.cpp
)

# Include header files
include_directories(Funcionarios 
                    Funcionarios/FuncEletrico
                    Funcionarios/FuncMecanico
                    Materiais/Material
                    Materiais/MatEstoque
                    Materiais/MatEletrico
                    Materiais/MatMecanico)

# Create an executable
add_executable(my_program ${SOURCES})