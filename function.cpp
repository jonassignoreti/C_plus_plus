#include <iostream>

using namespace std; // PARA REMOVER O "std::"

int g; //DECLARAÇÃO DE VARIÁVEL GLOBAL (FORA DAS FUNÇÕES)

#define pi 3.14; //DEFINIÇÃO DE CONSTANTES
#define curtir cout << "Curta esse video!\n"; //DECLARAÇÃO DE UMA TAREFA OU FUNÇÃO.

// int: TIPO DE RETORNO DA FUNÇÃO; sum: NOME DA FUNÇÃO; (param, param): PARÂMETROS
int soma(int &n1, int n2) { 
        // & usado antes do nome variável define ela como uma passagem de parâmetro por referência;
        int t;
        t = n1 + n2;
        n1 = 10;
        n2 = 20;
        return t;
    }

//Função Principal do Programa.
int main() {
    int a;
    int b;
    int s;

    cout << "type the first number: ";
    cin >> a;
    cout << "type the second number: ";
    cin >> b;

    cout << "valor de a: " << a << endl;
    cout << "valor de b: " << b << endl;

    s = soma(a,b);
    cout << "Valor da Soma" << s << endl;

    cout << "valor de a: " << a << endl; //Como a foi passado por referência, seu valor foi manipulado dentro da função somar.
    cout << "valor de a: " << b << endl;

    cout << "Valor da constante pi: " << pi;
    curtir;
    
    return 0;
}