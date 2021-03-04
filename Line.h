//
// Created by ilya on 3.03.21.
//

#ifndef TP_LINE_H
#define TP_LINE_H

#include "OpenFigure.h"

enum LineType {
  Line,
  Ray,
  Segment
};

class Line : public OpenFigure {
public:

  Line(QPoint start,QPoint end,LineType type);
  void Draw(QPainter* painter) override;

  void Move(const QPoint& new_start) override;

  std::vector<QPoint> GetLocation() override;

private:
  LineType type;
};


#endif //TP_LINE_H
