//
// Created by ilya on 3.03.21.
//

#include "CloseFigure.h"

const Color &CloseFigure::GetInnerColor() const {
  return inner_color;
}

void CloseFigure::SetInnerColor(const Color &innerColor) {
  inner_color = innerColor;
}
