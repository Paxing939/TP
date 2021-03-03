//
// Created by ilya on 3.03.21.
//

#include "Polygon.h"

const Point &Polygon::GetPoints() const {
  return points;
}

void Polygon::SetPoints(const Point &points) {
  Polygon::points = points;
}

void Polygon::Draw() {

}

void Polygon::Move() {

}

std::vector<Point> Polygon::GetLocation() {
  return std::vector<Point>();
}
