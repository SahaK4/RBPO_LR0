cmake_minimum_required(VERSION 3.2)

project(Lab1)

set(SOURCES
	Person.c
)

set(HEADERS
	Person.h
)

add_library(Lab1_lib STATIC CompareStrings.c fun_cmd.c ShowData.c Default.c Sort.c)

add_executable(Lab1 ${SOURCES} ${HEADERS})

target_link_libraries(Lab1 Lab1_lib)
