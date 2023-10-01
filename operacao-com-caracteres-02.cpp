#include <iostream>

int main() {
    int num1, num2;
    
    // Solicita ao usuário fornecer dois números inteiros
    std::cout << "Digite dois números inteiros: ";
    std::cin >> num1 >> num2;

    // Identifica o maior número e imprime a mensagem correspondente
    int maior = (num1 > num2) ? num1 : num2;

    std::cout << "O maior número é: " << maior << " e ";
    std::cout << ((maior % 2 == 0) ? "é par" : "é ímpar") << std::endl;

    return 0;
}
