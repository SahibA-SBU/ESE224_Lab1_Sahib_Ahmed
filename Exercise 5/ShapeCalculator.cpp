#include "ShapeCalculator.h"
#include <cmath>
const double PI = 3.1415926;

ShapeCalculator::ShapeCalculator()
    : radius(0), length(0), width(0), base(0), height(0), x1(0), y1(0), x2(0), y2(0) {}

double ShapeCalculator::areaCircle(double r) const {
    if (r < 0) return -1.0;
    return PI * r * r;
}

double ShapeCalculator::perimeterCircle(double r) const {
    if (r < 0) return -1.0;
    return 2 * PI * r;
}

double ShapeCalculator::areaRectangle(double L, double W) const {
    if (L < 0 || W < 0) return -1.0;
    return L * W;
}

double ShapeCalculator::areaTriangle(double base, double height) const {
    if (base < 0 || height < 0) return -1.0;
    return (base * height) / 2.0;
}

double ShapeCalculator::distance(double x1, double y1, double x2, double y2) const {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}