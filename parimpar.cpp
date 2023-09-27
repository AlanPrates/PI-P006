/*
Escreva um programa que:
a. pec?a ao usua?rio para fornecer dois nu?meros inteiros, obtenha-os da
entrada padr�o, usando cin, e imprima o maior deles seguido das
palavras ?e maior?.
b. Se os nu?meros foram iguais, imprima a mensagem ?estes
nu?meros sa?o iguais?. Use apenas o operador condicional (?).
c. Identifique se o maior valor � um n�mero par ou �mpar.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    int num1, num2;

    // Solicita ao usu�rio que forne�a dois n�meros inteiros
    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2;

    // Verifica e imprime o maior n�mero com a mensagem apropriada
    (num1 > num2) ? cout << num1 << " � maior" :
    (num2 > num1) ? cout << num2 << " e maior" : cout << "Os n�meros digitados s�o iguais";

    // Verifica se o maior n�mero � par ou �mpar
    int maior = (num1 > num2) ? num1 : (num2 > num1) ? num2 : -1; // Usamos -1 se forem iguais para indicar que n�o h� um maior
    if (maior != -1) {
        if (maior % 2 == 0) {
            cout << " e � um n�mero par." << endl;
        } else {
            cout << " e � um n�mero �mpar." << endl;
        }
    }

    return 0;
}
