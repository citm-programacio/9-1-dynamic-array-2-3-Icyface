#include <iostream>
#include <vector>
#include <algorithm> // Para std::lower_bound
using namespace std;

int main() {
    vector<int> sortedArray; // Array dinámico para mantener los números ordenados
    int number;

    cout << "Introduce números (escribe -1 para terminar):" << endl;

    while (true) {
        cout << "Número: ";
        cin >> number;

        if (number == -1) { // Condición para terminar
            break;
        }

        // Encuentra la posición donde insertar el número
        auto pos = lower_bound(sortedArray.begin(), sortedArray.end(), number);

        // Inserta el número en la posición correcta
        sortedArray.insert(pos, number);

        // Imprime el array ordenado
        cout << "Array actual: ";
        for (int n : sortedArray) {
            cout << n << " ";
        }
        cout << endl;
    }

    cout << "Programa terminado." << endl;
    return 0;
}
