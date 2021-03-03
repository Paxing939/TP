//
// Created by ilya on 3.03.21.
//

#ifndef TP_ELLIPSE_H
#define TP_ELLIPSE_H

#include "CloseFigure.h"

class Ellipse : public CloseFigure {
public:

  const Point &GetFirstFocus() const;

  void SetFirstFocus(const Point &firstFocus);

  const Point &GetSecondFocus() const;

  void SetSecondFocus(const Point &secondFocus);

  void Draw() override;

  void Move() override;

  std::vector<Point> GetLocation() override;

private:
  Point first_focus;
  Point second_focus;
};


#endif //TP_ELLIPSE_H
