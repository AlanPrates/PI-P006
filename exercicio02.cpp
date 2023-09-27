/*
Escreva um programa que:
a. Declare tr�s vari�veis de tipo int, vamos chamar de a, b e c mas
voc� pode escolher outro identificador se achar mais apropriado;
b. Pec?a ao usua?rio para digitar dois nu?meros inteiros, obtenha-os da
entrada padr�o, usando cin, e atribua os valores digitados �s
vari�veis a e b respectivamente;
c. Atribua � vari�vel c o valor da express�o
d. 4 * ?? + ?? / 3 ? 5. Imprima o resultado na tela;
e. Atribua � vari�vel c o valor da express�o 4 * (?? + ??) / (3 ? 5).
Imprima o resultado na tela;
f. Comente no c�digo o por que dos resultados destas express�es
serem diferentes. Demonstre implementando outra varia��o desta
express�o que gere resultado diferente;
g. Utilizando o �ltimo valor calculado de c, recalcule o valor da mesma
utilizando a express�o ?? , imprima o resultado na tela;*/


#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");

    int a, b, c;

    // Solicita ao usu�rio que digite dois n�meros inteiros
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    // Calcula e imprime o resultado da primeira express�o
    c = 4 * a + b / 3 - 5;
    cout << "Resultado da primeira express�o: " << c << endl;

    // Calcula e imprime o resultado da segunda express�o
    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da segunda express�o: " << c << endl;

    // Coment�rios explicando sobre a diferen�a entre as express�es
    cout << "A diferen�a entre as express�es ocorre devido a preced�nia dos operadores:" << endl;
    cout << "Na primeira express�o, a divis�o � realizada antes da multiplica��o e soma." << endl;
    cout << "Na segunda express�o, a soma � realizada antes da multiplica��o e divis�o." << endl;

    // Implementa��o de uma varia��o das express�es
    int d = a + b / (3 - 5);
    cout << "Varia��o da segunda expressao: " << d << endl;

    // Recalcula o valor de c utilizando a express�o a
    c = a;
    cout << "Recalculando c com a express�o 'a': " << c << endl;

    return 0;
}
