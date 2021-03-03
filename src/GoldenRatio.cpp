//
// Created by SoKoL on 02.03.2021.
//

#include "GoldenRatio.h"
#include <cmath>

double GoldenRatio::find_x1(double a, double b) {
    return a + ((3 - sqrt(5)) / 2) * (b - a);
}

double GoldenRatio::find_x2(double a, double b) {
    return a + ((sqrt(5) - 1) / 2) * (b - a);
}

void GoldenRatio::setValue(double a, double b, double eps) {
    this->a = a;
    this->b = b;
    this->eps = eps;
}

double GoldenRatio::evaluate() {
    double x1 = find_x1(a, b), x2 = find_x2(a, b), eps_n;
    double tau = (sqrt(5) - 1) / 2;
    double f1 = Function::evaluate(x1), f2 = Function::evaluate(x2);
    do {
        if (f1 <= f2) {
            b = x2;
            x2 = x1;
            x1 = b - tau * (b - a);
            f2 = f1;
            f1 = Function::evaluate(x1);
        } else {
            a = x1;
            x1 = x2;
            f1 = f2;
            x2 = a + tau * (b - a);
            f2 = Function::evaluate(x2);
        }
        tau *= tau;
        eps_n = (tau * (b - a)) / 2;
    } while (eps_n > eps);
    return (a + b) / 2;
}
