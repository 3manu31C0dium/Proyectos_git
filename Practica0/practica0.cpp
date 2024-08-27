#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char letra;

    int aux , aux1 , unidad , decena , centena , mil ;

    int i;

    for (i=0; i<7; i++){
        letra=65;
        for (int j = 0; j<=i; j++){
            cout<<letra;
            letra++;
        }
        for (int k=0; k<11-2*i; k++)
            cout<<' ';
        letra=65+i;
        for (int l= 0; l<=i; l++){
            if (letra!='G'){
                cout<<letra;
            }
            letra--;
        }
        cout<<endl;
    }


    for (i=6; i>0; i--){
        letra=65;
        for (int j = 1; j<=i; j++){
            cout<<letra;
            letra++;
        }
        for (int k=0; k<13-2*i; k++)
            cout<<' ';
        letra=65+i;
        for (int l= 0; l<=i; l++){
            if (letra!='G' && l>0){
                cout<<letra;
            }
            letra--;
        }
        cout<<endl;
    }

    cout<<endl;

    int numero = 231;
    aux1 = numero;
    unidad = numero%10; numero/=10;
    decena = numero%10; numero/=10;
    centena = numero%10; numero/=10;
    mil = numero%10;
    aux = pow(mil, mil)+pow(centena,centena)+pow(decena,decena)+pow(unidad,unidad);
    cout<<"el resultado de la suma de cada digito de "<<aux1<<" elevado a si mismo es: "<<aux;
    cout<<endl;
    return 0;
}
