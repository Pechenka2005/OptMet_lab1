//
// Created by Сергей on 03.03.2021.
//

#ifndef INC_1_LAB_COMBINEDBRENT_H
#define INC_1_LAB_COMBINEDBRENT_H

#include "Function.h"
#include <cmath>

class CombinedBrent {
private:
    double a, c, x, w, v, eps, step, prevStep, u;
    const double K = ((sqrt(5) - 1) / 2);
public:
    CombinedBrent(double a, double c, double eps) {
        this->a = a;
        this->c = c;
        this->eps = eps;
        this->x = this->w = this->v = (c - a) * K;
        this->u = (c + a) / 2;
        this->step = this->prevStep = c - a;
    }

    double evaluate();
};


#endif //INC_1_LAB_COMBINEDBRENT_H
