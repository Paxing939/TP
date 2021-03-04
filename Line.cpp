//
// Created by ilya on 3.03.21.
//

#include "Line.h"
#include <cmath>

Line::Line(QPoint start, QPoint end, LineType type_){
    start_point = start;
    end_point = end;
    type = type_;
}

void Line::Draw(QPainter* painter) {
    painter->drawLine(start_point,end_point);
    QPen pen;
    pen.setWidth(5);
    painter->setPen(pen);
    if (type == LineType::Ray)
         painter->drawPoint(start_point);
    else if (type == LineType::Segment) {
        painter->drawPoint(start_point);
         painter->drawPoint(end_point);
    }
}

void Line::Move(const QPoint& new_start) {
    QPoint delta = new_start - start_point;
    end_point += delta;
    start_point = new_start;
}

std::vector<QPoint> Line::GetLocation() {
  return std::vector<QPoint>();
}
