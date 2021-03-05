#include <iostream>

using namespace std;

int main(){
    system("CLS");
    //ENTRADA DE VALORES
    int l;
    int c;
    cout << "DIGITE O NUMERO DE LINHAS" << endl;
    cin >> l;
    cout << "DIGITE O NUMERO DE COLUNAS" << endl;
    cin >> c;
    int m[2][l][c];
    int s[l][c];

    //ENTRADA DE VALORES DAS MATRIZES
    for (int h=0; h < 2; h++){
        cout << "ENTRE COM OS DADOS DA " << h+1 << "a MATRIZ: " << endl;
        for (int i=0; i < l; i++){
            for (int j=0; j < c; j++){
                cout << i+1 << "a LINHA, " << j+1 << "a COLUNA: " << endl;
                cin >> m[h][i][j];
            }
        }
    }
    //EXIBINDO AS MATRIZES
    for (int h=0; h < 2; h++){
        cout << h+1 << "a MATRIZ >>" << endl;
        for (int i=0; i < l; i++){
            for (int j=0; j < c; j++){
                cout << m[h][i][j] << " ";
            }
            cout << endl;
        }
    }
    //EXIBINDO A SOMATÓRIA ENTRE AS DUAS MATRIZES
    cout << "SOMA ENTRE AS DUAS MATRIZES" << endl;
    for (int i=0; i<l; i++){
        for (int j=0; j<c; j++){
            s[i][j] = m[0][i][j] + m[1][i][j];
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*DESAFIO 7
Crie um algoritmo em C++, em que o usuário informa a dimensão de uma matriz, e os elementos de duas matrizes (ambas com a mesma dimensão) e o algoritmo mostra a soma entre estas duas matrizes.*/