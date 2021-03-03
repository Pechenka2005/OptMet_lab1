//
// Created by SoKoL on 02.03.2021.
//

#include "GoldenRatio.h"

double GoldenRatio::find_x1(double a, double b) const {
    return (b - tau * (b - a));
}

double GoldenRatio::find_x2(double a, double b) const {
    return (a + tau * (b - a));
}

void GoldenRatio::setValue(double a, double b, double eps) {
    this->a = a;
    this->b = b;
    this->eps = eps;
}

double GoldenRatio::evaluate() {
    double x1 = find_x1(a, b), x2 = find_x2(a, b), eps_n = (tau * (b - a)) / 2;
    double f1 = Function::evaluate(x1), f2 = Function::evaluate(x2);
    while (eps_n > eps) {
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
        eps_n *= tau;
    }
    return (a + b) / 2;
}
