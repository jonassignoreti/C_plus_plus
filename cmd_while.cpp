#include <iostream>

using namespace std; // PARA REMOVER O "std::"

int main() {
    int n1;
    int counter = 0; //DECLARANDO A VARIÁVEL E ADMITINDO UM VALOR
    int amount = 0;

    while (counter < 10) { // ENQUANTO A CONDIÇÃO FOR VERDADEIRA, FAÇA:

        cout << "type a number (" << counter << ")" << endl;
        cin >> n1;

        if (n1 < 5) {
            amount++; // ++ INCREMENTO
        }
        counter++;
    }
}
/* do {                    PARA TESTE DE CONDIÇÃO NO FINAL DE CADA LOOP
    ...
} while (condição); */