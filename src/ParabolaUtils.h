//
// Created by llSoK on 17.03.2021.
//

#ifndef INC_1_LAB_PARABOLAUTILS_H
#define INC_1_LAB_PARABOLAUTILS_H
/*
 * Class containing helper methods for the Parabolas Method
 */
class ParabolaUtils {
protected:
    /*
     * method of finding a1 approximating parabola
     * param1: first calculated value
     * param2: second calculated value
     */
    static double find_a_1(double x1, double x2);
    /*
     * method of finding a2 approximating parabola
     * param1: first calculated value
     * param2: second calculated value
     * param3: third calculated value
     */
    static double find_a_2(double x1, double x2, double x3);
    /*
     * method of finding min approximating parabola
     * param1: first calculated value
     * param2: second calculated value
     * param3: function value from first argument
     * param4: function value from second argument
     */
    static double find_x_n(double x1, double x2, double f1, double f2);

};

#endif //INC_1_LAB_PARABOLAUTILS_H
