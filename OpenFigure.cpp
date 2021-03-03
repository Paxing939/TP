//
// Created by ilya on 3.03.21.
//

#include "OpenFigure.h"

const Point &OpenFigure::GetEndPoint() const {
  return end_point;
}

void OpenFigure::SetEndPoint(const Point &endPoint) {
  end_point = endPoint;
}

const Point &OpenFigure::GetStartPoint() const {
  return start_point;
}

void OpenFigure::SetStartPoint(const Point &startPoint) {
  start_point = startPoint;
}
