#include <iostream>

using namespace std;

int main(){
    system("CLS");

    int f[5];
    int s=0;
    int m=0;

    for (int c=0; c<5; c++){
        cout << "DIGITE O GASTO COM ALIMENTACAO DA " << c + 1 << "a FAMILIA" << endl;
        cin >> f[c];
        s+=f[c];
    }

    m = s/5;

    for (int c=0; c<5; c++){
        cout << "A " << c + 1 << "a FAMILIA GASTOU: " << f[c] << ", E SEU GASTO ESTA ";
        if (f[c] == m){
            cout << "NA MEDIA" << endl;
        }else if (f[c] < m){
            cout << "ABAIXO DA MEDIA" << endl;
        }else{
            cout << "ACIMA DA MEDIA" << endl;
        }
    }

    return 0;
}




/*DESAFIO 6
Crie um algoritmo em C++, em que o usuário informa os gastos com alimentação de 5 famílias, calcula a média de gastos e diz de cada família, se seu gasto é abaixo da média, acima da média ou na média.*/