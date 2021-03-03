//
// Created by ilya on 3.03.21.
//

#include "Line.h"

Line::Line(QPoint start, QPoint end){
    start_point = start;
    end_point = end;
}

void Line::Draw(QPainter* painter) {
    painter->drawLine(start_point,end_point);
}

void Line::Move() {

}

std::vector<QPoint> Line::GetLocation() {
  return std::vector<QPoint>();
}
