#include <iostream>

using namespace std;


int main() {
    system("CLS");
    int idade;
    float renda;

    cout << "DIGITE O VALOR DA SUA RENDA: " << endl;
    cin >> renda;
    cout << "DIGITE A SUA IDADE: " << endl;
    cin >> idade;

    if (renda <= 1200 && idade >= 21) {
        cout << "VOCE PODERA PARTICIPAR DO MORADIA POPULAR" << endl;
    } else {
        cout << "INFELIZMENTE VOCE NAO PODERA PARTIPICAR NO MORADIA POPULAR." << endl;
    }

    return 0;
}
/*DESAFIO 5
Em um programa de Moradia Popular, somente pessoas maiores de 21 anos e com renda abaixo de R$ 1200,00 podem participar.
Crie um algortimo em C++, em que o usuário informa sua idade e sua renda, e é informado se ele pode ou não participar desse programa.*/