//
// Created by Сергей on 03.03.2021.
//

#include "CombinedBrent.h"
#include "Parabola.h"

double CombinedBrent::evaluate() {
    double eps_n = (c - a) / 2;

    double f_x  = Function::evaluate(x);
    double f_v  = Function::evaluate(v);
    double f_w  = Function::evaluate(w);
    double f_u;

    while (eps_n > eps) {
        double g = step;
        step = prevStep;
        double temp_u = u;

        double tol = eps * fabs(x) + eps / 10;
        if (fabs(x - (a + c) / 2) + (c - a) / 2 <= 2 * tol) {
            break;
        }
        if (Function::different(x, v, w)
        && Function::different(f_x, f_w, f_v)) {
            temp_u = Parabola::find_x_n(a, u, c);
            if ((temp_u > a || Function::equals(temp_u, a)) && (temp_u < c || Function::equals(temp_u, c)) && fabs(temp_u - x) < g / 2) {
                u = temp_u;
                if (u - a < 2 * tol || c - u < 2 * tol) {
                    u = x - Function::sign(x - (a + c) / 2) * tol;
                }
            }
        } else {
            if (x < (a + c) / 2) {
                u = x + K * (c - x);
                step = c - x;
            } else {
                u = x - K * (x - a);
                step = x - a;
            }
        }

        if (fabs(u - x) < tol) {
            u = x + Function::sign(x - (a + c) / 2) * tol;
        }
        prevStep = fabs(x - u);
        f_u = Function::evaluate(u);
        if (f_u < f_x) {
            if (u > x || Function::equals(u, x)) {
                a = x;
            } else {
                c = x;
            }
            v = w;
            w = x;
            x = u;
            f_v = f_w;
            f_w = f_x;
            f_x = f_u;
        } else {
            if (u > x || Function::equals(u, x)) {
                c = u;
            } else {
                a = u;
            }
            if (f_u < f_w || Function::equals(f_u, f_w) || Function::equals(w, x)) {
                v = w;
                w = u;
                f_v = f_w;
                f_w = f_u;
            } else if (f_u <= f_w || Function::equals(f_u, f_w) || Function::equals(v, x) || Function::equals(v, w)) {
                v = u;
                f_v = f_u;
            }
        }


    }
    return (c + a) / 2;
}
