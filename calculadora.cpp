#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    double suma = a + b;
    double resta = a - b;

    cout << "Resultado de la suma: " << suma << endl;
    cout << "Resultado de la resta: " << resta << endl;

    return 0;
}