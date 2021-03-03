//
// Created by ilya on 3.03.21.
//

#ifndef TP_FIGURE_H
#define TP_FIGURE_H

#include <vector>

struct Point {
  int x, y;
};

struct Color {
  int r, g, b;
};


class Figure {
public:

  Figure(const Color &borderColor, const Point &center);

  const Color &GetBorderColor() const;

  void SetBorderColor(const Color &borderColor);

  const Point &GetCenter() const;

  void SetCenter(const Point &center);

  virtual void Draw() = 0;

  virtual void Move() = 0;

  virtual std::vector<Point> GetLocation() = 0;

private:
  Color border_color_;
  Point center_;
};


#endif //TP_FIGURE_H
