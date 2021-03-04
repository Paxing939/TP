//
// Created by ilya on 3.03.21.
//

#include "Polygon.h"
#include <QDebug>


Polygon::Polygon(QPoint *points_, int num_of_points_)
{
    num_of_points = num_of_points_;
    points = points_;
}

void Polygon::Draw(QPainter* painter) {
    painter->drawPolygon(points,num_of_points);
}

void Polygon::Move(const QPoint& new_center) {
    QPoint center(0,0);
    for (int i = 0; i < num_of_points; ++i){
        center += points[i];
    }
    center /= num_of_points;
    QPoint delta = new_center - center;
    for (int i = 0; i < num_of_points; ++i) {
        points[i] += delta;
    }
}

std::vector<QPoint> Polygon::GetLocation() {
  return std::vector<QPoint>();
}
