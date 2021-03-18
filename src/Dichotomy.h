//
// Created by SoKoL on 01.03.2021.
//

#ifndef INC_1_LAB_DICHOTOMY_H
#define INC_1_LAB_DICHOTOMY_H


#include "Function.h"
#include <vector>
#include <utility>
/*
 * Class describing the Dichotomy method on a given interval
 */
class Dichotomy : Function {
private:
    double a, b, eps, delta;
    /*
     * Method that finds the minimum at the current iteration
     * param1: current left border interval
     * param2: current right border interval
     * param3: delta
     */
    static double find_x(double a, double b, double delta);

    std::vector<std::pair<double, double> > intervals;

public:
    /*
     * Constructor
     * param1: Left border a given interval
     * param2: Right border a given interval
     * param3: (epsilon) accuracy
     * param4: delta
     */
    Dichotomy(double a, double b, double eps, double delta) {
        this->a = a;
        this->b = b;
        this->eps = eps;
        this->delta = delta;
    }

    void setValue(double a, double b, double eps, double delta);
    /*
     * A method that computes the minimum of a given
     * function using Dichotomy method
     */
    double evaluate();

    std::vector<std::pair<double, double> > getIntervals();
};


#endif //INC_1_LAB_DICHOTOMY_H
