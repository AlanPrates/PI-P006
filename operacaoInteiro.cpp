/*Operações com inteiros
● Escreva um programa que:
a. Declare três variáveis de tipo int, vamos chamar de a, b e c mas
você pode escolher outro identificador se achar mais apropriado;
b. Peça ao usuário para digitar dois números inteiros, obtenha-os da
entrada padrão, usando cin, e atribua os valores digitados às
variáveis a e b respectivamente;
c. Atribua à variável c o valor da expressão
d. 4 * 𝑎 + 𝑏 / 3 − 5. Imprima o resultado na tela;
e. Atribua à variável c o valor da expressão 4 * (𝑎 + 𝑏) / (3 − 5).
Imprima o resultado na tela;
f. Comente no código o por que dos resultados destas expressões
serem diferentes. Demonstre implementando outra variação desta
expressão que gere resultado diferente;
g. Utilizando o último valor calculado de c, recalcule o valor da mesma
utilizando a expressão 𝑎 , imprima o resultado na tela;
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

int a, b, c;

cout << "Digite um número inteiro: " << endl;
cin >> a;

cout << "Digite mais um número inteiro: " << endl;
cin >> b;


// Os resultados das expressões são diferentes por conta da ordem de precedência aritmética.
// Na primeira expressão primeiro faz a multiplicação de 4 com a variável a, e depois a divisão da variável b com 3,
// em seguida soma e subtração. Na outra expressão primeiro é resolvido as operações que estão em 
// parenteses e em seguida a multiplicação e divisão.
c = 4 * a + b / 3 - 5;

cout << "Resultado da expressão: 4 * " << a << " + " << b << " / 3 − 5 é "<< c << endl;

c = 4 * (a + b) / (3 - 5);

cout << "Resultado da expressão: 4 * (" << a << "+" << b << ") / (3 − 5) é " << c << endl;

// Gerando outro resultado com os mesmo valores, mas modificando a ordem de procedência.

c = 4 * (a + b / 3 - 5);

cout << c << endl;

c = 4 * (a + b) / 3 - 5; 

cout << c << endl;

//Resolvendo a questão G.

c = a^2 + 2 * b + c;


cout <<"Variável c recalculada: " << c << endl;

return(0);

}