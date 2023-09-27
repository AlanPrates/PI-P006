/*
Escreva um programa que
a. Declare três variáveis de tipo double, vamos chamar de x, y e z
mas você pode escolher outro identificador se achar mais apropriado;
b. Pec?a ao usua?rio para digitar dois nu?meros de ponto flutuante,
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
resultado na tela;*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    double x, y, z;

    // Solicita ao usuário que digite dois números de ponto flutuante
    cout << "Digite o primeiro número de ponto flutuante: ";
    scanf("%lf", &x);
    cout << "Digite o segundo número de ponto flutuante: ";
    scanf("%lf", &y);

    // Parte (c): Soma das variáveis x e y
    z = x + y;
    cout << "Soma de x e y: " << z << endl;

    // Parte (d): Média das variáveis x e y
    z = (x + y) / 2.0;
    cout << "Média de x e y: " << z << endl;

    // Parte (e): Produto das variáveis x e y
    z = x * y;
    cout << "Produto de x e y: " << z << endl;

    // Parte (f): Maior valor entre x e y
    z = (x > y) ? x : y;
    cout << "Maior valor entre x e y: " << z << endl;

    // Parte (g): Menor valor entre x e y
    z = (x < y) ? x : y;
    cout << "Menor valor entre x e y: " << z << endl;

    return 0;
}
