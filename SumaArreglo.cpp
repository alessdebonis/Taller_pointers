#include <iostream>
using namespace std;


int addElements (int* arrayNum, int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum = sum + arrayNum[i];
        
    }
    return sum;
}

int main () {

    int arraySize = 0;

    cout<< "Ingrese el tamaño de la lista de numeros: ";
    cin >> arraySize;

    int* arrayNum = new (nothrow) int [arraySize];

    cout << "Ingrese los valores de la lista de numeros : \n";
    
    for (int i = 0; i < arraySize; i++) {

        cout << "Numero" << i + 1 << ": ";
        cin >> arrayNum[i];
    }

    int sum = addElements(arrayNum, arraySize);

    cout<< "La suma de los numeros es: "<< sum << "\n";


    delete[] arrayNum;


    return 0;
}