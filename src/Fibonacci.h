//
// Created by SoKoL on 04.03.2021.
//

#ifndef INC_1_LAB_FIBONACCI_H
#define INC_1_LAB_FIBONACCI_H

#include "Function.h"
#include <vector>
#include <utility>

class Fibonacci : Function {
private:
    double a, b, eps;
    int maxNumberOfFib = 50;
    int fib[100]{};

    int find_n();

    void find_fibonacci();

    double find_x1(double a, double b, int n) const;

    double find_x2(double a, double b, int n) const;

    std::vector<std::pair<double, double> > intervals;

public:
    Fibonacci(double a, double b, double eps) {
        this->a = a;
        this->b = b;
        this->eps = eps;
    }

    void setValue(double a, double b, double eps);

    double evaluate();

    std::vector<std::pair<double, double> > getIntervals();
};


#endif //INC_1_LAB_FIBONACCI_H
