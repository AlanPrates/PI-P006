/*Escreva um programa que leia da entrada padrão o raio de um círculo e
imprima:
a. Seu diâmetro;
b. O valor de sua circunferência (perímetro);
c. Sua área.*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double raio;

    // Solicita ao usuário para digitar o raio do círculo
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    // Calcula o diâmetro, a circunferência (perímetro) e a área do círculo
    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio; // M_PI é uma constante que representa o valor de π
    double area = M_PI * pow(raio, 2); // pow é usado para calcular a potência

    // Imprime os resultados na tela
    cout << "Diâmetro do círculo: " << diametro << endl;
    cout << "Circunferência do círculo: " << circunferencia << endl;
    cout << "Área do círculo: " << area << endl;

    return 0;
}
