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

  void Draw() override;

  void Move() override;

  std::vector<Point> GetLocation() override;

};


#endif //TP_LINE_H
