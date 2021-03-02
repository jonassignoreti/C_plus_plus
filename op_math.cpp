#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int number1; // DEFINIÇÃO DE VARIÁVEL
    int number2;

    cout << "Digite o primeiro numero: "; // ENTRADA DE VALORES
    cin >> number1; // Variável recebendo o valor.
    cout << "Digite o segundo numero: ";
    cin >> number2;

    int sum = number1 + number2; // + SOMA
    cout << number1 << " + " << number2 << " = " << sum << endl;

    int sub = number1 - number2; // - SUBTRAÇÃO
    cout << number1 << " - " << number2 << " = " << sub << endl;

    int mul = number1 * number2; // * MULTIPLICAÇÃO
    cout << number1 << " x " << number2 << " = " << mul << endl;

    int div = number1 / number2; // / Divisão
    cout << number1 << " / " << number2 << " = " << div << endl;

    float fdiv = (float)number1 / (float)number2; // / DIVISÃO REAL
    cout << "A divisao real de " << number1 << " / " << number2 << " = " << fdiv << endl;

    int res = number1 % number2; // % RESTO DA DIVISÃO
    cout << "O resto da divisao de " << number1 << " / " << number2 << " e " << res << endl;

    float pot = pow(number1,number2); // POTENCIAÇÃO
    cout << "A Potencia de 5 ** 2 e " << pot << endl;

    number1++; //INCREMENTO
    cout << "O Primeiro numero com incremento fica: " << number1 << endl;

    number2--; //DECREMENTO
    cout << "O segundo numero com decremento fica: " << number2 << endl;

}

    
    
    
    
    
    
    
