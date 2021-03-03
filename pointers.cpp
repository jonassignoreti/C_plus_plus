#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    system("CLS");

    int var1;
    int var2;
    int *point1; //Declaração de um ponteiro (*)
    var1=5; 
    point1 = &var1; //Ponteiro recebe o endereço da variável (&)

    cout << "VALOR DA VARIAVEL ATRAVES DO SEU NOME: " << var1 << endl;
    cout << "ENDERECO DA VARIAVEL ATRAVES DO SEU NOME: " << &var1 << endl;
    cout << "ENDERECO DA VARIAVEL ATRAVES DO SEU PONTEIRO: " << point1 << endl;
    cout << "VALOR DA VARIAVEL ATRAVES DO SEU PONTEIRO: " << *point1 << endl;
    

    var2 = 50;

    int* point2;
    point2 = NULL;
    cout << *point2;

    int *point3 = new int; //Apontando para um novo espaço na memória
    *point3 = 35;
    delete point3; //deletando o ponteiro


    return 0;
}