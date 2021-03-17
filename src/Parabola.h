//
// Created by Сергей on 02.03.2021.
//

#ifndef INC_1_LAB_PARABOLA_H
#define INC_1_LAB_PARABOLA_H

#include "Function.h"
#include "ParabolaUtils.h"
#include <vector>
#include <utility>

class Parabola : Function, ParabolaUtils {
private:
    double a, b, eps;
    std::vector<std::pair<double, double> > intervals;

public:
    Parabola(double a, double b, double eps) {
        this->a = a;
        this->b = b;
        this->eps = eps;
    }

    double evaluate();

    std::vector<std::pair<double, double> > getIntervals();
};


#endif //INC_1_LAB_PARABOLA_H
