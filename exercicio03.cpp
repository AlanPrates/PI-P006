/*
Escreva um programa que
a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3 mas você pode escolher outro identificador se achar mais apropriado;
b. Pec?a ao usua?rio para digitar dois caracteres, obtenha-os da entrada padrão, usando cin, e atribua os valores digitados às variáveis ch1 e ch2 respectivamente;
c. Atribua à variável ch3 o caractere que antecede ao caractere ch1, imprima na tela, utilizando cout, o caractere em formato numérico decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um caractere imprimível, substitua ele pelo caractere '_')
d. Atribua à variável ch3 o caractere que precede ao caractere ch2, imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere; (caso ch3 não seja um caractere imprimível, substitua ele pelo caractere '_')
e. Atribua à variável ch3 o valor 'A' se o caractere ch1 for uma letra maiúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o operador condicional (?) com esta finalidade. Imprima o valor de ch3 na tela;
f. Atribua à variável ch3 o valor 'a' se o caractere ch2 for uma letra minúscula e o valor ' '(caractere espaço vazio) caso contrário. Use o operador condicional (?) com esta finalidade. Imprima o valor de ch3 na tela;
g. Atribua à variável ch3 o valor '1' se o caractere ch1 ou o caractere ch2 forem um dígito e o valor ' '(caractere espaço vazio) caso contrário. Use o operador condicional (?) com esta finalidade. Imprima o valor de ch3 na tela;
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuquese_Brazil");
    char ch1, ch2, ch3;

    // Solicita ao usuário que digite dois caracteres
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // Parte (c): Encontrar o caractere que antecede ch1 e imprimir em diferentes formatos
    ch3 = (ch1 - 1 < ' ') ? '_' : ch1 - 1;
    cout << "Caractere anterior a ch1: " << static_cast<int>(ch3) << " (Decimal), "
              << oct << static_cast<int>(ch3) << " (Octal), "
              << hex << static_cast<int>(ch3) << " (Hexadecimal), "
              << ch3 << " (Caractere)" << endl;

    // Parte (d): Encontrar o caractere que antecede ch2 e imprimir em diferentes formatos
    ch3 = (ch2 - 1 < ' ') ? '_' : ch2 - 1;
    cout << "Caractere anterior a ch2: " << static_cast<int>(ch3) << " (Decimal), "
              << oct << static_cast<int>(ch3) << " (Octal), "
              << hex << static_cast<int>(ch3) << " (Hexadecimal), "
              << ch3 << " (Caractere)" << endl;

    // Parte (e): Atribuir 'A' ou espaço a ch3 com base em ch1
    ch3 = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : ' ';
    cout << "ch3 com base em ch1: " << ch3 << endl;

    // Parte (f): Atribuir 'a' ou espaço a ch3 com base em ch2
    ch3 = (ch2 >= 'a' && ch2 <= 'z') ? 'a' : ' ';
    cout << "ch3 com base em ch2: " << ch3 << endl;

    // Parte (g): Atribuir '1' ou espaço a ch3 com base em ch1 ou ch2 sendo dígito
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    cout << "ch3 com base em ch1 ou ch2 sendo dígito: " << ch3 << endl;

    return 0;
}
