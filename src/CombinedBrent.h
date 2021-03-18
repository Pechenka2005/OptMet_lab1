//
// Created by Сергей on 03.03.2021.
//

#ifndef INC_1_LAB_COMBINEDBRENT_H
#define INC_1_LAB_COMBINEDBRENT_H

#include "Function.h"
#include "ParabolaUtils.h"
#include <cmath>
#include <vector>
#include <utility>
/*
 * Class describing the combined brent method on a given interval
 */
class CombinedBrent : Function, ParabolaUtils {
private:
    double a, c, x, w, v, eps, d, e, u;
    const double K = ((sqrt(5) - 1) / 2);
    std::vector<std::pair<double, double> > intervals;

public:
    /*
     * Constructor
     * param1: Left border a given interval
     * param2: Right border a given interval
     * param3: (epsilon) accuracy
     */
    CombinedBrent(double a, double c, double eps) {
        this->a = a;
        this->c = c;
        this->eps = eps;
        this->x = this->w = this->v = a + K * (c - a);
        this->u = (a + c) / 2;
        this->d = this->e = c - a;
    }

    std::vector<std::pair<double, double> > getIntervals();
    /*
     * A method that computes the minimum of a given
     * function using the combined Brent method
     */
    double evaluate();
};


#endif //INC_1_LAB_COMBINEDBRENT_H
