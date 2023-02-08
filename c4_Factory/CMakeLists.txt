cmake_minimum_required(VERSION 3.10)

## Define qual o nome do projeto
project(PizzaStore)

## Adiciona o diretório inc na lista de pastas a procurar
# por arquivos .h
include_directories(inc)

## Adiciona um executável
add_executable(main
  src/Pizza.cpp
  src/PizzaStore.cpp
  ./main.cpp
)
