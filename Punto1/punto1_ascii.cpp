#include <iostream>
using namespace std;

int punto1() {
    char letra;
    cout << "Ingrese una letra: "<< endl;
    cin >> letra ;

    char mayus = toupper(letra);

    if (mayus == 'A' || mayus == 'E' || mayus == 'I' || mayus == 'O' || mayus == 'U')
    {
        cout << letra << " es una vocal.\n";
    }
    else if (mayus >= 'A' && mayus <= 'Z')
    {
        cout << letra << " es una consonante.\n";
    }
    else 
    {
        cout << letra << " no es una letra.\n";
    }

    return 0;
}