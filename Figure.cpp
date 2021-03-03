//
// Created by ilya on 3.03.21.
//

#include "Figure.h"

const Color &Figure::GetBorderColor() const {
  return border_color_;
}

void Figure::SetBorderColor(const Color &borderColor) {
  border_color_ = borderColor;
}

const QPoint &Figure::GetCenter() const {
  return center_;
}

void Figure::SetCenter(const QPoint &center) {
  Figure::center_ = center;
}

