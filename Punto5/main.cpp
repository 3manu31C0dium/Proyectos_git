#include <iostream>

using namespace std;

int main() {
    int tamano;
    cout << "Entre un numero para el tamaño del patron: ";
    cin >> tamano;

    if (tamano % 2 == 0) {
        cout << "Por favor, introduzca un numero impar." << endl;
        return 1;
    }

    int mid = tamano / 2;

    for (int i = 0; i < tamano; i++) {
        int aster = i <= mid ? 2 * i + 1 : 2 * (tamano - i - 1) + 1;
        int espacios = (tamano - aster) / 2;

        for (int j = 0; j < espacios; j++) cout << " ";
        for (int j = 0; j < aster; j++) cout << "*";
        cout << endl;
    }

    return 0;
}