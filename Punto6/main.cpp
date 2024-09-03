#include <iostream>
#include <iomanip>

using namespace std;

double factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int terminos;
    cout << "Ingrese el numero para la aproximación: ";
    cin >> terminos;

    double e = 0;
    for (int i = 0; i < terminos; i++) {
        e += 1.0 / factorial(i);
    }

    cout << "e es aproximadamente: " << fixed << setprecision(6) << e << endl;

    return 0;
}
