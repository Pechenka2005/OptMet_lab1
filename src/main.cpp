#include <iostream>
#include "Function.h"
#include "Dichotomy.h"

using namespace std;

int main() {

    Dichotomy res(0.5, 4, 0.00001, 0);
    cout << res.evaluate() << endl;
    return 0;
}