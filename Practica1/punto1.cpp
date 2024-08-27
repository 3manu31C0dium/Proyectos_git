#include <iostream>

using namespace std;

int A , B ;

float num= A&B; //cambiar tipo de número para mostrar decimales

int main()
{
    cout << "Ingrese el numero A: " << endl;
    cin >> A;

    cout << "Ingrese el numero B: " << endl;
    cin >> B;

    cout << "El residuo de la division es: " << endl;
    cout << num << endl;
}
