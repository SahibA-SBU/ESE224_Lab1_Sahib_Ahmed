#ifndef SHAPECALCULATOR_H
#define SHAPECALCULATOR_H

class ShapeCalculator {
    private:
        double radius;
        double length, width;
        double base, height;
        double x1, y1, x2, y2;

    public:
        ShapeCalculator();

        double areaCircle(double r) const;
        double perimeterCircle(double r) const;
        double areaRectangle(double L, double W) const;
        double areaTriangle(double base, double height) const;
        double distance(double x1, double y1, double x2, double y2) const;
};

#endif