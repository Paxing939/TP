cmake_minimum_required(VERSION 3.17)
project(TP)

set(CMAKE_CXX_STANDARD 20)

add_executable(TP main.cpp Figure.cpp Figure.h OpenFigure.cpp OpenFigure.h CloseFigure.cpp CloseFigure.h Line.cpp Line.h Polygon.cpp Polygon.h Ellipse.cpp Ellipse.h)