#include <iostream>
#include <string>
using namespace std;

int main() {

    string str  = "aeiouAEIOU" ;
    string letras = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ" ;

    char caracter;
    int count = 0 ;

    cout << "Ingrese un caracter: ";
    cin >> caracter;

    if (str.find(caracter) != std::string::npos) {
        count++ ;
    } else {
        count-- ;
    }


    if (letras.find(caracter) != std::string::npos) {
        count+2 ;
    }else {
        count-10 ;
    }


    if(count >= 1){

        cout << caracter << " Es una vocal" << endl;
    } /*else{
        cout << caracter << " No es una vocal" << endl;
        cout << caracter << " Es una consonante" << endl;
    }*/

    if(count <1) {
        cout << caracter << " No es una vocal" << endl;
        cout << caracter << " Es una consonante" << endl;
    }

    if(count>1) {
        cout<< caracter << " Es una letra"<<endl;
    }

    if(count <(-2)) {
        cout<< caracter << " No es una letra"<<endl;
    }


    return 0;
}