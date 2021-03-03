//
// Created by SoKoL on 02.03.2021.
//

#ifndef INC_1_LAB_GOLDENRATIO_H
#define INC_1_LAB_GOLDENRATIO_H
#include <cmath>
#include "Function.h"


class GoldenRatio : public Function {
private:
    double a, b, eps;
    const double tau = ((sqrt(5) - 1) / 2);
    double find_x1(double a, double b) const;
    double find_x2(double a, double b) const;

public:
    GoldenRatio(double a, double b, double eps) {
        this->a = a;
        this->b = b;
        this->eps = eps;
    }
    void setValue(double a, double b, double eps);
    double evaluate();
};


#endif //INC_1_LAB_GOLDENRATIO_H
