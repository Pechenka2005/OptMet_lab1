//
// Created by Сергей on 02.03.2021.
//

#ifndef INC_1_LAB_PARABOLA_H
#define INC_1_LAB_PARABOLA_H


#include "Function.h"

class Parabola : Function {
private:
    double a, b, eps;

public:
    Parabola(double a, double b, double eps) {
        this->a = a;
        this->b = b;
        this->eps = eps;
    }

    double evaluate();
    static double find_a_1(double x1, double x2);
    static double find_a_2(double x1, double x2, double x3);
    static double find_x_n(double x1, double x2, double x3);
};


#endif //INC_1_LAB_PARABOLA_H
