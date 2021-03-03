//
// Created by ilya on 3.03.21.
//

#include "Figure.h"

Figure::Figure(const Color &borderColor, const Point &center) : border_color_(borderColor), center_(center) {}

const Color &Figure::GetBorderColor() const {
  return border_color_;
}

void Figure::SetBorderColor(const Color &borderColor) {
  border_color_ = borderColor;
}

const Point &Figure::GetCenter() const {
  return center_;
}

void Figure::SetCenter(const Point &center) {
  Figure::center_ = center;
}
