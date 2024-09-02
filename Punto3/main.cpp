#include <iostream>
#include <vector>

using namespace std;

bool fechavalida(int dia, int mes) {
    if (mes < 1 || mes > 12) return false;

    vector<int> dias_en_mes = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (dia < 1 || dia > dias_en_mes[mes - 1]) {
        if (mes == 2 && dia == 29) {
            return true;  //posiblemente un año bisiesto
        }
        return false;
    }

    return true;
}

int main() {
    int dia, mes;
    cout << "Ingrese dia y mes (separados por un espacio): ";
    cin >> dia >> mes;

    if (mes < 1 || mes > 12) {
        cout << mes << " es un mes invalido." << endl;
    } else if (!fechavalida(dia, mes)) {
        cout << dia << "/" << mes << " es una fecha invalida." << endl;
    } else if (mes == 2 && dia == 29) {
        cout << "29/2 es valida en bisiesto." << endl;
    } else {
        cout << dia << "/" << mes << " es una fecha valida." << endl;
    }

    return 0;
}
