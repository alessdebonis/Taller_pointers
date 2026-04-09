#include <iostream>
using namespace std;

void applyOperation(int* arr, int arraySize, int option) {
    for (int i = 0; i < arraySize; i++) {
        if (option == 1) {
            *(arr + i) = *(arr + i) * 2;
        } else if (option == 2) {
            *(arr + i) = *(arr + i) * 3;
        }
    }
}

int main() {
    int arraySize = 0;

    cout << "Ingrese el tamano del arreglo: ";
    cin >> arraySize;

    if (arraySize <= 0) {
        cout << "El arreglo esta vacio.\n";
        return 0;
    }

    int* arr = new int[arraySize];

    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    int option = 0;
    cout << "Ingrese 1 para duplicar o 2 para triplicar: ";
    cin >> option;

    applyOperation(arr, arraySize, option);

    cout << "Arreglo final:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    delete[] arr;

    return 0;
}