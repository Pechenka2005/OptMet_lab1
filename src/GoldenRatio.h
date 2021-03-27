//
// Created by SoKoL on 02.03.2021.
//

#ifndef INC_1_LAB_GOLDENRATIO_H
#define INC_1_LAB_GOLDENRATIO_H

#include "Function.h"
#include <cmath>
#include <vector>
#include <utility>

/*
 * Class describing Golden Ratio method on a given interval
 */
class GoldenRatio : Function {
private:
    double a, b, eps;
    const double tau = ((sqrt(5) - 1) / 2);

    /*
    * finding the first division point of the current segment
    * param1: left border current interval
    * param2: right border current interval
    */
    double find_x1(double a, double b) const;

    /*
    * finding the second division point of the current segment
    * param1: left border current interval
    * param2: right border current interval
    */
    double find_x2(double a, double b) const;

    std::vector<std::pair<double, double> > intervals;

public:
    /*
     * Constructor
     * param1: Left border a given interval
     * param2: Right border a given interval
     * param3: (epsilon) accuracy
     */
    GoldenRatio(double a, double b, double eps) {
        this->a = a;
        this->b = b;
        this->eps = eps;
    }

    void setValue(double a, double b, double eps);

    /*
     * A method that computes the minimum of a given
     * function using the Golden Ratio method
     */
    double evaluate();

    std::vector<std::pair<double, double> > getIntervals();
};


#endif //INC_1_LAB_GOLDENRATIO_H
