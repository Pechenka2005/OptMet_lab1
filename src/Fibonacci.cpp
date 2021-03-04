//
// Created by SoKoL on 04.03.2021.
//

#include "Fibonacci.h"

int Fibonacci::find_n() {
    find_fibonacci();
    double comparable = (b - a) / eps;
    for (int i = 0; i < maxNumberOfFib; i++) {
        if (fib[i] > comparable) {
            return i - 2;
        }
    }
}

void Fibonacci::find_fibonacci() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < maxNumberOfFib; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void Fibonacci::setValue(double a, double b, double eps) {
    this->a = a;
    this->b = b;
    this->eps = eps;
}

double Fibonacci::find_x1(double a, double b, int n) const {
    return (a + (b - a) * ((double)fib[n - 2] / fib[n]));
}

double Fibonacci::find_x2(double a, double b, int n) const {
    return (a + (b - a) * ((double)fib[n - 1] / fib[n]));;
}

double Fibonacci::evaluate() {
    int max_n = find_n(), n = 1;
    double x1 = find_x1(a, b, max_n), x2 = find_x2(a, b, max_n);
    double f1 = Function::evaluate(x1), f2 = Function::evaluate(x2);
    while (n <= max_n - 2) {
        if (f1 > f2) {
            a = x1;
            x1 = x2;
            x2 = find_x2(a, b, max_n - n);
            f1 = f2;
            f2 = Function::evaluate(x2);
        } else {
            b = x2;
            x2 = x1;
            x1 = find_x1(a, b, max_n - n);
            f2 = f1;
            f1 = Function::evaluate(x1);
        }
        n++;
    }

    x2 = x1 + eps;
    f2 = Function::evaluate(x2);
    if (f1 == f2) {
        a = x1;
    } else {
        b = x2;
    }
    return (a + b) / 2;
}



