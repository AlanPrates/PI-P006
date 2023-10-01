#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio;
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio;
    double area = M_PI * pow(raio, 2);

    cout << "Diâmetro: " << diametro << endl;
    cout << "Circunferência: " << circunferencia << endl;
    cout << "Área: " << area << endl;

    return 0;
}
