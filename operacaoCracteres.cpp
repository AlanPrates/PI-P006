/*Operações com caracteres
● Escreva um programa que
a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e
ch3 mas você pode escolher outro identificador se achar mais
apropriado;
b. Peça ao usuário para digitar dois caracteres, obtenha-os da entrada
padrão, usando cin, e atribua os valores digitados às variáveis ch1 e
ch2 respectivamente;
c. Atribua à variável ch3 o caractere que antecede ao caractere ch1,
imprima na tela, utilizando cout, o caractere em formato numérico
decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
caractere imprimível, substitua ele pelo caractere '_')
d. Atribua à variável ch3 o caractere que precede ao caractere ch2,
imprima na tela, utilizando printf, o caractere em formato numérico
decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um
caractere imprimível, substitua ele pelo caractere '_')
e. Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma letra
maiúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
operador condicional (?) com esta finalidade. Imprima o valor de ch3
na tela;
f. Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma letra
minúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o
operador condicional (?) com esta finalidade. Imprima o valor de ch3
na tela;
g. Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere
ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso
contrário. Use o operador condicional (?) com esta finalidade.
Imprima o valor de ch3 na tela;*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std; // Para simplificar o uso do namespace std

int main() {
    char ch1, ch2, ch3;

    // Pede ao usuário para digitar dois caracteres
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;

    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // Atribui o caractere anterior a ch1 a ch3
    ch3 = (ch1 - 1);

    // Imprime ch3 em diferentes formatos
    cout << "Valor de ch3 em decimal: " << static_cast<int>(ch3) << endl;
    cout << "Valor de ch3 em octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Valor de ch3 em hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere ch3: " << ((isprint(ch3)) ? ch3 : '_') << endl;

    // Atribui o caractere anterior a ch2 a ch3
    ch3 = (ch2 - 1);

    // Imprime ch3 em diferentes formatos
    cout << "Valor de ch3 em decimal: " << static_cast<int>(ch3) << endl;
    cout << "Valor de ch3 em octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Valor de ch3 em hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere ch3: " << ((isprint(ch3)) ? ch3 : '_') << endl;

    // Atribui 'A' se ch1 for uma letra maiúscula ou ' ' caso contrário
    ch3 = (isupper(ch1) ? 'A' : ' ');

    // Imprime ch3
    cout << "Valor de ch3: " << ch3 << endl;

    // Atribui 'a' se ch2 for uma letra minúscula ou ' ' caso contrário
    ch3 = (islower(ch2) ? 'a' : ' ');

    // Imprime ch3
    cout << "Valor de ch3: " << ch3 << endl;

    // Atribui '1' se ch1 ou ch2 forem dígitos ou ' ' caso contrário
    ch3 = (isdigit(ch1) || isdigit(ch2) ? '1' : ' ');

    // Imprime ch3
    cout << "Valor de ch3: " << ch3 << endl;

    return 0;
}
