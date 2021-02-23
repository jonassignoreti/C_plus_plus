#include <iostream>

using namespace std; // PARA REMOVER O "std::"

int main() {
    int total;

    for (int n = 2; n <= 20; n += 2) { // for (iteração, condição, incremento)
        total += n;
    }
    cout << " The sum of the serie is " << total << endl;

    return 0;
}