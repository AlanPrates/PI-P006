/*
Escreva um programa que leia da entrada padrão o raio de um círculo e
imprima:
a. Seu dia?metro;
b. O valor de sua circunfere?ncia (perímetro);
c. Sua a?rea.
*/

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    double raio;

    // Solicita o raio do círculo
    cout << "Digite o raio do cí­rculo: ";
    cin >> raio;

    // Calcula o diâmetro, a circunferência (perí­metro) e a área do cí­rculo
    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio; // M_PI é uma constante da biblioteca cmath que representa o valor de pi
    double area = M_PI * pow(raio, 2); // pow() é usada para elevar um número ao quadrado

    // Imprime os resultados
    cout << "Diâmetro do cí­rculo: " << diametro << endl;
    cout << "Circunferência (perí­metro) do cí­rculo: " << circunferencia << endl;
    cout << "Área do círculo: " << area << endl;

    return 0;
}
