#include <iostream>

using namespace std; // PARA REMOVER O "std::"

// int: TIPO DE RETORNO DA FUNÇÃO; sum: NOME DA FUNÇÃO; (param, param): PARÂMETROS
int soma(int n1, int n2) {
        int t;
        t = n1 + n2;
        return t;
    }

int main() {
    int a;
    int b;
    int s;

    cout << "type the first number: ";
    cin >> a;
    cout << "type the second number: ";
    cin >> b;

    cout << soma(a,b);
    cin >> s;
    cout << a << " + " << b << " = " << s;
    
    return 0;
}