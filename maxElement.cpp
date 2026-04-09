#include <iostream>
using namespace std;

int findMax (const int* arr, int arraySize) {
    if (arraySize <=0) {
        return 0;
    }

    int max = *arr;

    for (int i = 1; i < arraySize; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;

}

int main() {
    int arraySize = 0;

    cout << "Ingresa el tamaño del arreglo: ";
    cin >> arraySize;

    if (arraySize <= 0) {
        cout << "El arreglo esta vacio.\n";
        return 0;
    }

    int* arr = new int[arraySize];

    cout << "Ingrese los numeros del arreglo:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    int max = findMax(arr, arraySize);

    cout << "El numero mayor del arreglo: " << max << "\n";

    delete[] arr;

    return 0;
}
