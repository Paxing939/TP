//
// Created by ilya on 3.03.21.
//

#include "Ellipse.h"

Ellipse::Ellipse(QPoint center_, int rx_, int ry_) : center(center_),rx(rx_),ry(ry_) {}

void Ellipse::Draw(QPainter* painter) {
    painter->drawEllipse(center,rx,ry);
}

void Ellipse::Move() {

}

std::vector<QPoint> Ellipse::GetLocation() {
  return std::vector<QPoint>();
}
