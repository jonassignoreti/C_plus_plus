#include <iostream>

using namespace std; // PARA REMOVER O "std::"

int main() {
    int n1;
    int n2;

    cout << "Type the first number "; // ENTRADA DE VALORES
    cin >> n1;
    cout << "Type the second number: ";
    cin >> n2;

    if (n1 == n2) { // CONDICIONAL
        cout << n1 << " is equal (==) to " << n2 << endl; // ESBOÇO ENTRE CHAVES {}
    }
    if (n1 != n2) {
        cout << n1 << " is diferent (!=) to " << n2 << endl;
    }
    if (n1 < n2) {
        cout << n1 << " is less than (<) to " << n2 << endl;
    }
    if (n1 > n2) {
        cout << n1 << " is greater than (>) to " << n2 << endl;
    }
}
