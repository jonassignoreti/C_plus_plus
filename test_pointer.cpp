#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    system("CLS");

    int *p1 = new int;
    *p1 = 10;
    cout << "address p1: " << p1 << endl;
    cout << "value on p1: " << *p1 << endl;

    int *p2;
    p2 = p1;
    cout << "address p2: " << p2 << endl;
    cout << "value on p2: " << *p2 << endl;

    delete p1;

    cout << "address p1: " << p1 << endl;
    cout << "value on p1: " << *p1 << endl;
    cout << "address p2: " << p2 << endl;
    cout << "value on p2: " << *p2 << endl;

    return 0;
}