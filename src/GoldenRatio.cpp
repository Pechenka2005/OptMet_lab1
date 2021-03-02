//
// Created by SoKoL on 02.03.2021.
//

#include "GoldenRatio.h"
#include <cmath>

double GoldenRatio::find_x1(double a, double b) {
    return (a + ((3 - sqrt(5)) / 2) * (b - a));
}

double GoldenRatio::find_x2(double a, double b) {
    return (a + ((sqrt(5) - 1) / 2) * (b - a));
}

void GoldenRatio::setValue(double a, double b, double eps) {
    this->a = a;
    this->b = b;
    this->eps = eps;
}

double GoldenRatio::evaluate() {
    
}
