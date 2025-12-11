#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    double suma = a + b;
    double resta = a - b;
    double mult = a * b;
    double div = a / b;
    double sqr1 = a * a;
    double suma2 = a + b + c;

    cout << "Resultado de la suma: " << suma << endl;
    cout << "Resultado de la resta: " << resta << endl;
    cout << "Resultado de la multiplicacion: " << mult << endl;
    cout << "Resultado de la division: " << div << endl;
    cout << "El cuadrado del primer numero es: " << sqr1 << endl;
    cout << "Suma de a, b y c: " << suma2 << endl;

    return 0;
}