/*
Escreva um programa que leia os valores (x, y) de um ponto do plano e
informe em qual quadrante o ponto se encontra. Use apenas o operador
condicional (?). Lembre que um ponto, no plano cartesiano, pode estar no
primeiro quadrante ( se x> 0 e y>0), no segundo quadrante ( se x<0 e y>0),
no terceiro quadrante ( se x<0 e y<0), no quarto quadrante (se x>0 e y<0) ou
sobre um dos eixos (caso x=0 ou y=0).
*/

#include <iostream>

using namespace std;

int main() {
    double x, y;

    // Solicita as coordenadas (x, y)
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    // Verifica em qual quadrante o ponto se encontra ou se está sobre um dos eixos
    string quadrante = (x > 0 && y > 0) ? "primeiro quadrante" :
                       (x < 0 && y > 0) ? "segundo quadrante" :
                       (x < 0 && y < 0) ? "terceiro quadrante" :
                       (x > 0 && y < 0) ? "quarto quadrante" :
                       (x == 0 || y == 0) ? "sobre um dos eixos" :
                       "ponto de origem";

    // Imprime o resultado
    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;

    return 0;
}
