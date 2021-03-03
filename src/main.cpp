#include <iostream>
#include "Dichotomy.h"
#include "Parabola.h"
#include "GoldenRatio.h"

using namespace std;

int main() {
    Dichotomy res_d(0.5, 4, 0.00001, 0.0000001);
    cout << "Method Dichotomy: " << res_d.evaluate() << endl;
    Parabola res_p(0.5, 4, 0.00001);
    cout << "The parabola method: " << res_p.evaluate() << endl;
    GoldenRatio res_gr(0.5, 4, 0.00000001);
    cout << "The golder ratio method: " << res_gr.evaluate() << endl;
    return 0;
}