#include <iostream>

int main() {

    char ch1, ch2, ch3;


    std::cout << "Digite dois caracteres: ";
    std::cin >> ch1 >> ch2;


    ch3 = ch1 - 1;
    if (isprint(ch3)) {
        std::cout << "Valor numérico decimal de ch3: " << int(ch3) << std::endl;
        std::cout << "Valor octal de ch3: " << std::oct << int(ch3) << std::endl;
        std::cout << "Valor hexadecimal de ch3: " << std::hex << int(ch3) << std::endl;
        std::cout << "Caractere ch3: " << ch3 << std::endl;
    } else {
        std::cout << "Valor de ch3 não é um caractere imprimível: _" << std::endl;
    }


    ch3 = ch2 - 1;
    if (isprint(ch3)) {
        printf("Valor numérico decimal de ch3: %d\n", int(ch3));
        printf("Valor octal de ch3: %o\n", int(ch3));
        printf("Valor hexadecimal de ch3: %x\n", int(ch3));
        printf("Caractere ch3: %c\n", ch3);
    } else {
        printf("Valor de ch3 não é um caractere imprimível: _\n");
    }


    ch3 = (isupper(ch1)) ? 'A' : ' ';
    std::cout << "Valor de ch3: " << ch3 << std::endl;


    ch3 = (islower(ch2)) ? 'a' : ' ';
    std::cout << "Valor de ch3: " << ch3 << std::endl;


    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';
    std::cout << "Valor de ch3: " << ch3 << std::endl;

    return 0;
}
