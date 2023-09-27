/*
Escreva um programa que leia da entrada padr�o o raio de um c�rculo e
imprima:
a. Seu dia?metro;
b. O valor de sua circunfere?ncia (per�metro);
c. Sua a?rea.
*/

#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    double raio;

    // Solicita o raio do c�rculo
    cout << "Digite o raio do c�rculo: ";
    cin >> raio;

    // Calcula o di�metro, a circunfer�ncia (per�metro) e a �rea do c�rculo
    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio; // M_PI � uma constante da biblioteca cmath que representa o valor de pi
    double area = M_PI * pow(raio, 2); // pow() � usada para elevar um n�mero ao quadrado

    // Imprime os resultados
    cout << "Di�metro do c�rculo: " << diametro << endl;
    cout << "Circunfer�ncia (per�metro) do c�rculo: " << circunferencia << endl;
    cout << "�rea do c�rculo: " << area << endl;

    return 0;
}
