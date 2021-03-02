#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, media, mt;

    cout << "DIGITE O VALOR DA PRIMEIRA NOTA: " << endl;
    cin >> n1;
    cout << "DIGITE O VALOR DA SEGUNDA NOTA: " << endl;
    cin >> n2;
    cout << "DIGITE O VALOR DA TERCEIRA NOTA: " << endl;
    cin >> n3;
    cout << "DIGITE O VALOR DA MEDIA DA SALA: " << endl;
    cin >> mt;

    media = (n1 + n2 + n3) / 3;

    if (media == mt) {
        cout << "ALUNO ESTA COM SUA NOTA NA MEDIA. " << media << endl;
    } else if (media > mt) {
        cout << "ALUNO ESTA COM SUA NOTA ACIMA DA MEDIA. " << media << endl;
    } else {
        cout << "ALUNO ESTA COM SUA NOTA ABAIXO DA MEDIA. " << media << endl;
    }

    return 0;
}

/*DESAFIO 2
Crie um algortino em C++, em que o usuário informa as notas de três provas de um determinado aluno e também a média de nota da turma toda. O Algortimo deve calcular a média deste aluno e informa se sua nota é acima da média, abaixo da média ou está na média.*/