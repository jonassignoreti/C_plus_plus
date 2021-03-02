# include <iostream>

using namespace std;

int main(){

    //INT: em geral, utiliza 4 bytes de memória e armazena númeeos inteiros (sem casas decimais) com valores que vão de -2147483648 a 2147483647
    int inteiro = 5.2; // "int" é o tipo, "inteiro" é o nome da variável
    cout << inteiro << endl;

    //FLOAT: em geral, utiliza 4 bytes de memória e armazena números com menos de seis casas decimais com valores que vão de 1.2e-38 a 3.4e38.
    float real;
    real = 5.2;
    cout << real << endl;

    //DOUBLE: em geral, utiliza 8 bytes de memória e armazena números com menos de 15 casas decimais com valores que vão de 2.2e-308 a 1.79e308.
    double real2; 
    real2 = 5e99;
    cout << real2 << endl;

    //BOOL: em geral, utiliza 1 byte da memória e os valores True ou False.
    bool booleano;
    booleano = false;
    cout << booleano << endl;

    //CHAR: em geral, utiliza 1 byte da memória, permite armazenar um único caractere ou uma cadeia de caracteres. ( com aspas simples '_')
    char letra;
    letra = 'b';
    cout << letra << endl;

    //STRING: para usar mais letras (usando aspas duplas "_").
    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    return 0;
}