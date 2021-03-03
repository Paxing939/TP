//
// Created by ilya on 3.03.21.
//

#include "Ellipse.h"

const Point &Ellipse::GetFirstFocus() const {
  return first_focus;
}

void Ellipse::SetFirstFocus(const Point &firstFocus) {
  first_focus = firstFocus;
}

const Point &Ellipse::GetSecondFocus() const {
  return second_focus;
}

void Ellipse::SetSecondFocus(const Point &secondFocus) {
  second_focus = secondFocus;
}

void Ellipse::Draw() {

}

void Ellipse::Move() {

}

std::vector<Point> Ellipse::GetLocation() {
  return std::vector<Point>();
}
