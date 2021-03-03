//
// Created by ilya on 3.03.21.
//

#ifndef TP_OPENFIGURE_H
#define TP_OPENFIGURE_H

#include "Figure.h"

class OpenFigure : public Figure {
public:

  const Point &GetEndPoint() const;

  void SetEndPoint(const Point &endPoint);

  const Point &GetStartPoint() const;

  void SetStartPoint(const Point &startPoint);

private:
  Point end_point;
  Point start_point;
};


#endif //TP_OPENFIGURE_H
