#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    c = 4 * a + b / 3 - 5;

    cout << "Resultado da expressão 4 * a + b / 3 - 5: " << c << endl;

    c = 4 * (a + b) / (3 - 5);


    cout << "Resultado da expressão 4 * (a + b) / (3 - 5): " << c << endl;

    c = a + 2 * b + c;

    cout << "Resultado da expressão a + 2 * b + c: " << c << endl;

    return 0;
}
