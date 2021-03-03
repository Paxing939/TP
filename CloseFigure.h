//
// Created by ilya on 3.03.21.
//

#ifndef TP_CLOSEFIGURE_H
#define TP_CLOSEFIGURE_H

#include "Figure.h"

class CloseFigure : public Figure {
public:

  const Color &GetInnerColor() const;

  void SetInnerColor(const Color &innerColor);

private:
  Color inner_color;
};


#endif //TP_CLOSEFIGURE_H
