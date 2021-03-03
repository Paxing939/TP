//
// Created by ilya on 3.03.21.
//

#ifndef TP_FIGURE_H
#define TP_FIGURE_H
#include<QPainter>
#include <vector>

struct Color {
  int r, g, b;
};


class Figure {
public:

  const Color &GetBorderColor() const;

  void SetBorderColor(const Color &borderColor);

  const QPoint &GetCenter() const;

  void SetCenter(const QPoint &center);

  virtual void Draw(QPainter* painter) = 0;

  virtual void Move() = 0;

  virtual std::vector<QPoint> GetLocation() = 0;

private:
  Color border_color_;
  QPoint center_;
};


#endif //TP_FIGURE_H
