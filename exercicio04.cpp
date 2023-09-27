/*
Escreva um programa que
a. Declare tr�s vari�veis de tipo double, vamos chamar de x, y e z
mas voc� pode escolher outro identificador se achar mais apropriado;
b. Pec?a ao usua?rio para digitar dois nu?meros de ponto flutuante,
obtenha-os da entrada padr�o, usando scanf, e atribua os valores
digitados �s vari�veis x e y respectivamente;
c. Atribua � vari�vel z a somas das vari�veis a e b, imprima o resultado
na tela;
d. Atribua � vari�vel z a m�dia das vari�veis x e y, imprima o resultado
na tela;
e. Atribua � vari�vel z o produto entre as vari�veis x e y, imprima o
resultado na tela;
f. Atribua � vari�vel z o maior valor entre as vari�veis x e y, imprima o
resultado na tela;
g. Atribua � vari�vel z o menor valor entre as vari�veis x e y, imprima o
resultado na tela;*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    double x, y, z;

    // Solicita ao usu�rio que digite dois n�meros de ponto flutuante
    cout << "Digite o primeiro n�mero de ponto flutuante: ";
    scanf("%lf", &x);
    cout << "Digite o segundo n�mero de ponto flutuante: ";
    scanf("%lf", &y);

    // Parte (c): Soma das vari�veis x e y
    z = x + y;
    cout << "Soma de x e y: " << z << endl;

    // Parte (d): M�dia das vari�veis x e y
    z = (x + y) / 2.0;
    cout << "M�dia de x e y: " << z << endl;

    // Parte (e): Produto das vari�veis x e y
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
