/*Escreva um programa que:
a. peça ao usuário para fornecer dois números inteiros, obtenha-os da
entrada padrão, usando cin, e imprima o maior deles seguido das
palavras “e maior”.
b. Se os números foram iguais, imprima a mensagem “estes
números são iguais”. Use apenas o operador condicional (?).
c. Identifique se o maior valor é um número par ou ímpar.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2;

    // Solicita ao usuário para fornecer dois números inteiros
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    // Verifica qual é o maior número e imprime a mensagem apropriada
    if (num1 > num2) {
        cout << "O maior número é: " << num1 << " e maior." << endl;
    } else if (num2 > num1) {
        cout << "O maior número é: " << num2 << " e maior." << endl;
    } else {
        cout << "Estes números são iguais." << endl;
    }

    // Verifica se o maior número é par ou ímpar
    int maior = (num1 > num2) ? num1 : num2;
    if (maior % 2 == 0) {
        cout << "O maior número é par." << endl;
    } else {
        cout << "O maior número é ímpar." << endl;
    }

    return 0;
}
