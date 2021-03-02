#include <iostream>

using namespace std;

int main() {
    float number;
    float result;
    cout << "type a number" << endl;
    cin >> number;
    result = (number * number) - (3 * number) + 5;
    cout << "The Result is: " << result << endl;

    return 0;
}

/* DESAFIO 1
Dada a função f(x) = x² - 3x + 5.
Crie um Algoritmo em C++, que tenha uma função que calcula o valor f(a), em que a é um número real informado pelo usuário. */