/*
Escreva um programa que:
a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas
você pode escolher outro identificador se achar mais apropriado;
b. Pec?a ao usua?rio para digitar dois nu?meros inteiros, obtenha-os da
entrada padrão, usando cin, e atribua os valores digitados às
variáveis a e b respectivamente;
c. Atribua à variável c o valor da expressão
d. 4 * ?? + ?? / 3 ? 5. Imprima o resultado na tela;
e. Atribua à variável c o valor da expressão 4 * (?? + ??) / (3 ? 5).
Imprima o resultado na tela;
f. Comente no código o por que dos resultados destas expressões
serem diferentes. Demonstre implementando outra variação desta
expressão que gere resultado diferente;
g. Utilizando o último valor calculado de c, recalcule o valor da mesma
utilizando a expressão ?? , imprima o resultado na tela;*/


#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");

    int a, b, c;

    // Solicita ao usuário que digite dois números inteiros
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    // Calcula e imprime o resultado da primeira expressão
    c = 4 * a + b / 3 - 5;
    cout << "Resultado da primeira expressão: " << c << endl;

    // Calcula e imprime o resultado da segunda expressão
    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da segunda expressão: " << c << endl;

    // Comentários explicando sobre a diferença entre as expressões
    cout << "A diferença entre as expressões ocorre devido a precedênia dos operadores:" << endl;
    cout << "Na primeira expressão, a divisão é realizada antes da multiplicação e soma." << endl;
    cout << "Na segunda expressão, a soma é realizada antes da multiplicação e divisão." << endl;

    // Implementação de uma variação das expressões
    int d = a + b / (3 - 5);
    cout << "Variação da segunda expressao: " << d << endl;

    // Recalcula o valor de c utilizando a expressão a
    c = a;
    cout << "Recalculando c com a expressão 'a': " << c << endl;

    return 0;
}
