//
// Created by SoKoL on 01.03.2021.
//

#ifndef INC_1_LAB_DICHOTOMY_H
#define INC_1_LAB_DICHOTOMY_H


#include "Function.h"

class Dichotomy : public Function {
private:
    double a, b, eps, delta;
    static double find_x(double a, double b, double delta);

public:
    Dichotomy(double a, double b, double eps, double delta) {
        this->a = a;
        this->b = b;
        this->eps = eps;
        this->delta = delta;
    }
    void setValue(double a, double b, double eps, double delta);
    double evaluate();
};


#endif //INC_1_LAB_DICHOTOMY_H
