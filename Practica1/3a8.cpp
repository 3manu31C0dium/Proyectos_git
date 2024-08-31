#include <iostream>
#include <cmath>

using namespace std;

void ejercicio3() {
    int a, b;
    cout << "Ingrese dos números A y B: ";
    cin >> a >> b;
    cout << "El mayor es " << (a > b ? a : b) << endl;
}

void ejercicio4() {
    int a, b;
    cout << "Ingrese dos números A y B: ";
    cin >> a >> b;
    cout << "El menor es " << (a < b ? a : b) << endl;
}

void ejercicio5() {
    int a, b;
    cout << "Ingrese dos números A y B: ";
    cin >> a >> b;
    cout << a << "/" << b << "=" << round((double)a / b) << endl;
}

void ejercicio6() {
    int a, b, resultado = 1;
    cout << "Ingrese dos números A y B: ";
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        resultado *= a;
    }
    cout << a << "^" << b << " = " << resultado << endl;
}

void ejercicio7() {
    int n, suma = 0;
    cout << "Ingrese un número N: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        suma += i;
    }
    cout << "La sumatoria desde 0 hasta " << n << " es: " << suma << endl;
}

void ejercicio8() {
    int n, factorial = 1;
    cout << "Ingrese un número N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << n << "! = " << factorial << endl;
}

int main() {
    int opcion;
    do {
        cout << "\nSeleccione un ejercicio (3-8) o 0 para salir: ";
        cin >> opcion;
        switch (opcion) {
        case 3: ejercicio3(); break;
        case 4: ejercicio4(); break;
        case 5: ejercicio5(); break;
        case 6: ejercicio6(); break;
        case 7: ejercicio7(); break;
        case 8: ejercicio8(); break;
        case 0: cout << "Saliendo del programa.\n"; break;
        default: cout << "Opción no válida.\n";
        }
    } while (opcion != 0);
    return 0;
}
