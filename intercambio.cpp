#include <iostream>
using namespace std;

void changePosition(int* p1, int* p2) {

    int temporal = 0;
    temporal = *p1;
    *p1 = *p2;
    *p2 = temporal;
}



int main () {

    int a = 0;
    int b = 0;

    cout << " Ingresa dos numeros:\n";
    cin >> a;
    cin >> b;

    cout << "Valores actual numeros: " << a << " y " << b <<"\n";

    changePosition(&a,&b);

    cout << "Numero modificado: " << a << " y " << b << "\n";

    return 0;
}



