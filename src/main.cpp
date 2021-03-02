#include <iostream>
#include "Function.h"
#include "Dichotomy.h"
#include "Parabola.h"

using namespace std;

int main() {
    Dichotomy res_d(0.5, 4, 0.00001, 0.0000001);
    cout << "Метод Дихотомии: " << res_d.evaluate() << endl;
    Parabola res_p(0.5, 4, 0.00001);
    cout << "Метод парабол: " << res_p.evaluate() << endl;
    return 0;
}