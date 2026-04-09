#include <iostream>
using namespace std;

void llenarMatriz(int** matriz, int row, int columns) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int addRow(int** matriz, int row, int columns) {
    int suma = 0;

    for (int j = 0; j < columns; j++) {
        suma = suma + matriz[row][j];
    }

    return suma;
}

int main() {
    int row = 0;
    int columns = 0;

    cout << "Ingrese el numero de filas: ";
    cin >> row;

    cout << "Ingrese el numero de columnas: ";
    cin >> columns;

    if (row <= 0 || columns <= 0) {
        cout << "La matriz no es valida.\n";
        return 0;
    }

    int** matriz = new int*[row];

    for (int i = 0; i < row; i++) {
        matriz[i] = new int[columns];
    }

    llenarMatriz(matriz, row, columns);

    cout << "\nSuma de cada fila:\n";
    for (int i = 0; i < row; i++) {
        cout << "La suma de la fila " << i + 1 << ": " << addRow(matriz, i, columns) << "\n";
    }

    for (int i = 0; i < row; i++) {
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}