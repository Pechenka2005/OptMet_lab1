//
// Created by SoKoL on 01.03.2021.
//

#ifndef INC_1_LAB_FUNCTION_H
#define INC_1_LAB_FUNCTION_H


class Function {
public:
    static double evaluate(double x);

protected:

    static double sign(double x);
    static bool equals(double x1, double x2);
    static bool different(double a, double b, double c);
};


#endif //INC_1_LAB_FUNCTION_H
