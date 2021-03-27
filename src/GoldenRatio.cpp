//
// Created by SoKoL on 02.03.2021.
//

#include "GoldenRatio.h"
#include <iostream>
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
    double calcFunction = 2;
    double f1 = Function::evaluate(x1), f2 = Function::evaluate(x2);
    intervals.emplace_back(a, b);
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
        calcFunction++;
        eps_n *= tau;
        intervals.emplace_back(a, b);
    }
    return std::cout << calcFunction << " ", (a + b) / 2;
}

std::vector<std::pair<double, double> > GoldenRatio::getIntervals() {
    evaluate();
    for (int i = intervals.size(); i < 30; i++) {
        intervals.emplace_back(a, b);
    }
    return intervals;
}
