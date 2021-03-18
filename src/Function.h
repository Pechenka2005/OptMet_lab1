//
// Created by SoKoL on 01.03.2021.
//

#ifndef INC_1_LAB_FUNCTION_H
#define INC_1_LAB_FUNCTION_H

/*
 * А сlass is a wrapper over a math function
*/
class Function {
public:
    /*
     * The method that evaluates the function
     */
    static double evaluate(double x);

protected:
    /*
     * The method that calculates the sign of the value passed to it
     */
    static double sign(double x);
    /*
     * Tests for equality two numbers of the type
     */
    static bool equals(double x1, double x2);
    /*
     * Checks three doubles for the difference
     */
    static bool different(double a, double b, double c);
};


#endif //INC_1_LAB_FUNCTION_H
