#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cantidad;
    cout << "Ingresa la cantidad: " << endl;
    cin >> cantidad;

    vector<int> denominacion = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    vector<int> counts(denominacion.size(), 0);

    for (size_t i = 0; i < denominacion.size(); ++i) {
        counts[i] = cantidad / denominacion[i];
        cantidad %= denominacion[i];
    }

    for (size_t i = 0; i < denominacion.size(); ++i) {
        cout << denominacion[i] << " : " << counts[i] << endl;
    }

    if (cantidad > 0) {
        cout << "Faltante: " << cantidad << endl;
    }

    return 0;
}
