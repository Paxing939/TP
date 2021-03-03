//
// Created by ilya on 3.03.21.
//

#ifndef TP_POLYGON_H
#define TP_POLYGON_H

#include "CloseFigure.h"

class Polygon : public CloseFigure {
public:

  const Point &GetPoints() const;

  void SetPoints(const Point &points);

  void Draw() override;

  void Move() override;

  std::vector<Point> GetLocation() override;

private:
  Point points;
};


#endif //TP_POLYGON_H
