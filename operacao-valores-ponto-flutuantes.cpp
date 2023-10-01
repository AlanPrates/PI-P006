
#include <iostream>
using namespace std;

int main() {
    // Declare as variáveis
    double x, y, z;

    // Peca ao usuário para digitar os dois números
    cout << "Digite dois números de ponto flutuante: ";
    cin >> x >> y;

    // Soma de x e y
    z = x + y;
    cout << "A soma de " << x << " e " << y << " é " << z << endl;

    // Média de x e y
    z = (x + y) / 2;
    cout << "A média de " << x << " e " << y << " é " << z << endl;

    // Produto de x e y
    z = x * y;
    cout << "O produto de " << x << " e " << y << " é " << z << endl;

    // Maior valor entre x e y
    z = (x > y) ? x : y;
    cout << "O maior valor entre " << x << " e " << y << " é " << z << endl;

    // Menor valor entre x e y
    z = (x < y) ? x : y;
    cout << "O menor valor entre " << x << " e " << y << " é " << z << endl;

    return 0;
}


