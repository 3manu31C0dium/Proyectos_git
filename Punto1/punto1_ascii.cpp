#include <iostream>
#include <cctype>

using namespace std;

int vocal() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    c = tolower(c);

    if (!isalpha(c)) {
        cout << c << " no es una letra." << endl;
    } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << c << " es una vocal." << endl;
    } else {
        cout << c << " es una consonante." << endl;
    }

    return 0;
}
