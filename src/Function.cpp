//
// Created by SoKoL on 01.03.2021.
//

#include "Function.h"
#include <cmath>

double Function::evaluate(double x) {
    return (x - log(x));
}

double Function::sign(double x) {
    return x > 0 ? 1 : -1;
}

bool Function::equals(double x1, double x2) {
    double eps = 0.000001;
    if (fabs(x1 - x2) < eps) {
        return true;
    }
    return false;
}

bool Function::different(double a, double b, double c) {
    if (equals(a, b) || equals(b, c) || equals(a, c)) {
        return false;
    }
    return true;
}
