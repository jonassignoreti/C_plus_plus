#include <iostream>

using namespace std;

int main() {
    system("CLS");

    float b, r;
    int e;

    cout << "DIGITE A BASE: " << endl;
    cin >> b;
    cout << "DIGITE O EXPOENTE: " << endl;
    cin >> e;
    r = b;
    if (e > 0) {
        for (int c = 1; c < e; c++) {
        r = r * b;
        }
        cout << "RESULTADO: " << r << endl;
    } else if (e == 0){
        r = 1;
        cout << "RESULTADO: " << r << endl;
    } else {
        cout << "NAO E POSSIVEL CALCULAR COM EXPOENTE NEGATIVO." << endl;
    }

    return 0;
}

/*DESAFIO 4
Crie um algoritmo em C++, que calcula a potência B**E, em que o suário informa um número real B e um número natural E. Nesse algortimo, sempre que é informado o resultado da potência, é perguntado ao usuário, se este deseja calcular outra potência. (SEM USAR pow()!)*/