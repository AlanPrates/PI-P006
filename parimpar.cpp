/*
Escreva um programa que:
a. pec?a ao usua?rio para fornecer dois nu?meros inteiros, obtenha-os da
entrada padrão, usando cin, e imprima o maior deles seguido das
palavras ?e maior?.
b. Se os nu?meros foram iguais, imprima a mensagem ?estes
nu?meros sa?o iguais?. Use apenas o operador condicional (?).
c. Identifique se o maior valor é um número par ou ímpar.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    int num1, num2;

    // Solicita ao usuário que forneça dois números inteiros
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    // Verifica e imprime o maior número com a mensagem apropriada
    (num1 > num2) ? cout << num1 << " é maior" :
    (num2 > num1) ? cout << num2 << " e maior" : cout << "Os números digitados são iguais";

    // Verifica se o maior número é par ou ímpar
    int maior = (num1 > num2) ? num1 : (num2 > num1) ? num2 : -1; // Usamos -1 se forem iguais para indicar que não há um maior
    if (maior != -1) {
        if (maior % 2 == 0) {
            cout << " e é um número par." << endl;
        } else {
            cout << " e é um número ímpar." << endl;
        }
    }

    return 0;
}
