#include <iostream>

using namespace std;

int main(){
    system("CLS");

    /*ALOCAÇÃO ESTÁTICA*/
    int vet1[4]; //DECLARANDO UM VETOR
    vet1[0] = 1; //ADICIONANDO VALORES
    vet1[1] = 2;
    cout << vet1[0] << endl;
    cout << vet1[1] << endl;
    cout << vet1[2] << endl;
    cout << vet1[3] << endl;

    int vet2[4] = {3,4}; //DECLARANDO UM VETOR COM VALOR E TAMANHO
    for (int i=0; i < 4; i++){
        cout << vet2[i] << endl;
    }

    int vet3[] = {5,6}; //DECLARANDO UM VETOR SEM ESPECIFICAR O TAMANHO
    int x = sizeof(vet3); //TAMANHO DO VETOR (QUANTIDADE DE BYTES)
    int y = sizeof(int); //TAMANHO DE UM INTEITO EM BYTES
    int z = x / y; //OBTENDO O TAMANHO DO VETOR
    cout << "TAMANHO DO VETOR: " << x << endl;
    cout << "TAMANHO DE UM INTEIRO (int): " << y << endl;
    cout << "NUMERO DE ELEMENTOS DO VETOR: " << z << endl;
    for (int i = 0; i < z; i++){
        cout << vet3[i] << endl;
    }

    /*ALOCAÇÃO DINÂMICA*/
    int tam;
    cout << "DIGITE O TAMANHO DO VETOR: " << endl;
    cin >> tam;
    int *vetor = new int[tam]; //DECLARANDO O VETOR DINAMICAMENTE

    for (int i=0; i < tam; i++){ //CHAMANDO PARA O USUÁRIO DAR ENTRADA
        cout << "DIGITE O ELEMENTO " << i << " DO VETOR: " << endl;
        cin >> vetor[i];
    }
    for (int i=0; i < tam; i++){ //IMPRIMINDO NA TELA O VETOR
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete [] vetor; //EXCLUINDO UM VETOR


    return 0;
}