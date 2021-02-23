#include <iostream>

using namespace std;

int main() {
    int number1; // DEFINIÇÃO DE VARIÁVEL
    int number2;

    cout << "Digite o primeiro numero: "; // ENTRADA DE VALORES
    cin >> number1;
    cout << "Digite o segundo numero: ";
    cin >> number2;

    int sum = number1 + number2; // + SOMA
    int sub = number1 - number2; // - SUBTRAÇÃO
    int mul = number1 * number2; // * MULTIPLICAÇÃO
    int div = number1 / number2; // / Divisão
    float fdiv = (float)number1 / (float)number2; // / DIVISÃO REAL
    int res = number1 % number2; // % RESTO DA DIVISÃO

    cout << number1 << " + " << number2 << " = " << sum << endl;
    cout << number1 << " - " << number2 << " = " << sub << endl;
    cout << number1 << " x " << number2 << " = " << mul << endl;
    cout << number1 << " / " << number2 << " = " << div << endl;
    cout << "A divisao real de " << number1 << " / " << number2 << " = " << fdiv << endl;
    cout << "O resto da divisao de " << number1 << " / " << number2 << " e " << res << endl;
}
