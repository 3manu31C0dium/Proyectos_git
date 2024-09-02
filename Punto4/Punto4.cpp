#include <iostream>
#include <iomanip>

using namespace std;

bool horavalida(int tiempo) {
    int horas = tiempo / 100;
    int minutos = tiempo % 100;
    return horas >= 0 && horas < 24 && minutos >= 0 && minutos < 60;
}

int main() {
    int tiempo_inc, duracion;
    cout << "Ingrese el tiempo de inicio (HHMM): ";
    cin >> tiempo_inc;
    cout << "Ingrese el tiempo de finalizacion (HHMM): ";
    cin >> duracion;

    if (!horavalida(tiempo_inc)) {
        cout << tiempo_inc << " Es un tiempo invalido." << endl;
        return 1;
    }else if (!horavalida(duracion)) {
        cout <<duracion<< " Es un tiempo invalido." << endl;
        return 1;
    }else(horavalida(tiempo_inc)||horavalida(duracion));

    /*if (!horavalida(duracion)) {
        cout <<duracion<< " Es un tiempo invalido." << endl;
        return 1;
    }*/

    int horas_iniciales = tiempo_inc / 100;
    int minutos_inic = tiempo_inc % 100;
    int duracion_hrs = duracion / 100;
    int duracion_mins = duracion % 100;

    int total_mins = (horas_iniciales + duracion_hrs) * 60 + minutos_inic + duracion_mins;
    int resulta_horas = (total_mins / 60) % 24;
    int resulta_mins = total_mins % 60;

    cout << "La hora es " << setfill('0') << setw(2) << resulta_horas
         << setfill('0') << setw(2) << resulta_mins << endl;

    return 0;
}