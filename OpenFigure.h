//
// Created by ilya on 3.03.21.
//

#ifndef TP_OPENFIGURE_H
#define TP_OPENFIGURE_H

#include "Figure.h"

class OpenFigure : public Figure {
public:

  const QPoint &GetEndPoint() const;


  void SetEndPoint(const QPoint &endPoint);

  const QPoint &GetStartPoint() const;

  void SetStartPoint(const QPoint &startPoint);

protected:
  QPoint start_point;
  QPoint end_point;
};


#endif //TP_OPENFIGURE_H
