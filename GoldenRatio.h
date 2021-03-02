//
// Created by SoKoL on 02.03.2021.
//

#ifndef INC_1_LAB_GOLDENRATIO_H
#define INC_1_LAB_GOLDENRATIO_H


class GoldenRatio {
private:
    double a, b, eps;
    static double find_x1(double a, double b);
    static double find_x2(double a, double b);

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
