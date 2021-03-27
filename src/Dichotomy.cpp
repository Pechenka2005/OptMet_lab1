//
// Created by SoKoL on 01.03.2021.
//

#include "Dichotomy.h"
#include <iostream>
double Dichotomy::find_x(double a, double b, double delta) {
    return ((a + b + delta) / 2);
}

double Dichotomy::evaluate() {
    double eps_n = (b - a) / 2;
    double calcFunction = 0;
    intervals.emplace_back(a, b);

    while (eps_n > eps) {
        double x1 = find_x(a, b, -delta), x2 = find_x(a, b, delta);
        if (Function::evaluate(x1) <= Function::evaluate(x2)) {
            b = x2;
        } else {
            a = x1;
        }
        calcFunction += 2;
        eps_n = (b - a) / 2;
        intervals.emplace_back(a, b);
    }

    return std::cout << calcFunction << " ", (b + a) / 2;
}

void Dichotomy::setValue(double a, double b, double eps, double delta) {
    this->a = a;
    this->b = b;
    this->eps = eps;
    this->delta = delta;
}

std::vector<std::pair<double, double> > Dichotomy::getIntervals() {
    evaluate();
    for (int i = intervals.size(); i < 30; i++) {
        intervals.emplace_back(a, b);
    }
    return intervals;
}
