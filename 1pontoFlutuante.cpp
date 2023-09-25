/*Escreva um programa que
a. Declare três variáveis de tipo double, vamos chamar de x, y e z
mas você pode escolher outro identificador se achar mais apropriado;
b. Peça ao usuário para digitar dois números de ponto flutuante,
obtenha-os da entrada padrão, usando scanf, e atribua os valores
digitados às variáveis x e y respectivamente;
c. Atribua à variável z a somas das variáveis a e b, imprima o resultado
na tela;
d. Atribua à variável z a média das variáveis x e y, imprima o resultado
na tela;
e. Atribua à variável z o produto entre as variáveis x e y, imprima o
resultado na tela;
f. Atribua à variável z o maior valor entre as variáveis x e y, imprima o
resultado na tela;
g. Atribua à variável z o menor valor entre as variáveis x e y, imprima o
resultado na tela;
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    double x, y, z;

    // Solicita ao usuário para digitar dois números de ponto flutuante
    cout << "Digite o primeiro número de ponto flutuante: ";
    cin >> x;

    cout << "Digite o segundo número de ponto flutuante: ";
    cin >> y;

    // Soma de x e y
    z = x + y;
    cout << "A soma de x e y é: " << z << endl;

    // Média de x e y
    z = (x + y) / 2.0;
    cout << "A média de x e y é: " << z << endl;

    // Produto de x e y
    z = x * y;
    cout << "O produto de x e y é: " << z << endl;

    // Maior valor entre x e y
    z = (x > y) ? x : y;
    cout << "O maior valor entre x e y é: " << z << endl;

    // Menor valor entre x e y
    z = (x < y) ? x : y;
    cout << "O menor valor entre x e y é: " << z << endl;

    return 0;
}
