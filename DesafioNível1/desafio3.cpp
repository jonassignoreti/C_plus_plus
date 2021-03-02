#include <iostream>

using namespace std;

int fatorial(int n){
    if (n == 1) {
        return 1;
    } else {
        return fatorial(n-1) * n;
    }
}
    

int main() {
    int number;
    int result;
    cout << "DIGITE UM NUMERO INTEIRO: " << endl;
    cin >> number;
    result = fatorial(number);
    cout << "O FATORIAL DE " << number << " VALE: " << result << endl;

    return 0;
}

/*DESAFIO 3
Crie um algortimo em C++, que tenha uma função que calcula o fatorial de um número inteiro positivo, informado pelo usuário. 5! = 5 x 4 x 3 x 2 x 1 = 120*/