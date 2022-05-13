
#pragma once
#include "Shape.h"
#include "Square.h"

class Rectangle {
protected:
    static const double length ;
    static const double width ;

public: //getters
    double getNewLength() const noexcept;
    double getNewWidth() const noexcept;

public: //constructor
    Rectangle{
        const Length newLength,
        const Width newWidth )
public:
    compute_area(double newLength, double newWidth) const no except;
};






