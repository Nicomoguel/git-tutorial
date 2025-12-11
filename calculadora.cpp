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
    double mult = a * b;
    double div = a / b;

    cout << "Resultado de la suma: " << suma << endl;
    cout << "Resultado de la resta: " << resta << endl;
    cout << "Resultado de la multiplicacion: " << mult << endl;
    cout << "Resultado de la division: " << div << endl;

    return 0;
}