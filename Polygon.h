//
// Created by ilya on 3.03.21.
//

#ifndef TP_POLYGON_H
#define TP_POLYGON_H

#include "CloseFigure.h"

class Polygon : public CloseFigure {
public:

  Polygon(QPoint* points_,int num_of_points_);
  const QPoint &GetPoints() const;

  void SetPoints(const QPoint &points);

  void Draw(QPainter* painter) override;

  void Move(const QPoint& new_center) override;

  std::vector<QPoint> GetLocation() override;

private:
  QPoint* points;
  int num_of_points;
};


#endif //TP_POLYGON_H
