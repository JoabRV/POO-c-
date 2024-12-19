#include <iostream>
#include "calculadora.h"

using namespace std;

int main() {
    Calculadora calc;
    double num1, num2;
    char operacion;

    cout << "Bienvenido a la calculadora\n";
    cout << "Ingrese la operación que desea realizar (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    try {
        double resultado;
        switch (operacion) {
            case '+':
                resultado = calc.sumar(num1, num2);
                break;
            case '-':
                resultado = calc.restar(num1, num2);
                break;
            case '*':
                resultado = calc.multiplicar(num1, num2);
                break;
            case '/':
                resultado = calc.dividir(num1, num2);
                break;
            default:
                cout << "Operación no válida.\n";
                return 1;
        }
        cout << "El resultado es: " << resultado << endl;
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
