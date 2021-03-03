//
// Created by ilya on 3.03.21.
//

#include "Polygon.h"


Polygon::Polygon(QPoint *points_, int num_of_points_)
{
    num_of_points = num_of_points_;
    points = points_;
}

void Polygon::Draw(QPainter* painter) {
    painter->drawPolygon(points,num_of_points);
}

void Polygon::Move() {

}

std::vector<QPoint> Polygon::GetLocation() {
  return std::vector<QPoint>();
}
