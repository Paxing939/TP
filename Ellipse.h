//
// Created by ilya on 3.03.21.
//

#ifndef TP_ELLIPSE_H
#define TP_ELLIPSE_H

#include "CloseFigure.h"

class Ellipse : public CloseFigure {
public:
  Ellipse(QPoint center_,int rx_, int ry_);

  void Draw(QPainter* painter) override;

  void Move() override;

  std::vector<QPoint> GetLocation() override;

private:
  QPoint center;
  int rx;
  int ry;
};


#endif //TP_ELLIPSE_H
