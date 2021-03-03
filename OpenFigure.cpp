//
// Created by ilya on 3.03.21.
//

#include "OpenFigure.h"


const QPoint &OpenFigure::GetEndPoint() const {
  return end_point;
}

void OpenFigure::SetEndPoint(const QPoint &endPoint) {
  end_point = endPoint;
}

const QPoint &OpenFigure::GetStartPoint() const {
  return start_point;
}

void OpenFigure::SetStartPoint(const QPoint &startPoint) {
  start_point = startPoint;
}
