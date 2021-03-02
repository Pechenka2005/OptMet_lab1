//
// Created by SoKoL on 01.03.2021.
//

#include "Dichotomy.h"

double Dichotomy::find_x(double a, double b, double delta) {
    return ((a + b + delta) / 2);
}

double Dichotomy::evaluate() {
    double eps_n = (b - a) / 2;

    while (eps_n > eps) {
        double x1 = find_x(a, b, -delta), x2  = find_x(a, b, delta);
        if (Function::evaluate(x1) <= Function::evaluate(x2)) {
            this->b = x2;
        } else {
            this->a = x1;
        }
        eps_n = (b - a) / 2;
    }

    return ((a + b) / 2);
}

void Dichotomy::setValue(double a, double b, double eps, double delta) {
    this->a = a;
    this->b = b;
    this->eps = eps;
    this->delta = delta;
}