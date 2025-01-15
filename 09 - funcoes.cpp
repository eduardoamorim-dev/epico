// Importação das bibliotecas padrão
#include <iostream>  // Biblioteca para operações de entrada/saída

using namespace std;

// Declaração das funções (protótipos)
int soma(int a, int b);
void exibirMensagem(string msg);
float calcularMedia(float nota1, float nota2);
int maior(int num1, int num2, int num3);
void calculadora(float n1, float n2, char op);

// Função principal (main)
int main() {
   // Testando função soma
   int resultado = soma(5, 3);
   cout << "Soma: " << resultado << endl;
   
   // Testando função mensagem
   exibirMensagem("Olá mundo!");
   
   // Testando função média
   float media = calcularMedia(7.5, 8.5);
   cout << "Média: " << media << endl;
   
   // Testando função maior
   int maiorNumero = maior(10, 5, 8);
   cout << "Maior número: " << maiorNumero << endl;
   
   // Testando calculadora
   calculadora(10, 5, '+');
   
   return 0;
}

// Implementação das funções
int soma(int a, int b) {
   return a + b;
}

void exibirMensagem(string msg) {
   cout << msg << endl;
}

float calcularMedia(float nota1, float nota2) {
   return (nota1 + nota2) / 2;
}

int maior(int num1, int num2, int num3) {
   if(num1 >= num2 && num1 >= num3)
       return num1;
   else if(num2 >= num1 && num2 >= num3)
       return num2;
   else
       return num3;
}

void calculadora(float n1, float n2, char op) {
   switch(op) {
       case '+':
           cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
           break;
       case '-':
           cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
           break;
       case '*':
           cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
           break;
       case '/':
           if(n2 != 0)
               cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
           else
               cout << "Erro: Divisão por zero!" << endl;
           break;
       default:
           cout << "Operador inválido!" << endl;
   }
}

// Comentário sobre a estrutura e funcionamento:
// 1. Protótipos: declaração das funções antes da main
// 2. Tipos de retorno: void (sem retorno), int, float, etc.
// 3. Parâmetros: valores que a função recebe para processar
// 4. Implementação: código que define o que a função faz
// 5. Chamada: como usar a função no programa principal
// 6. Exemplos incluem:
//    - Função com retorno e parâmetros (soma, média)
//    - Função sem retorno (void) com parâmetro (exibirMensagem)
//    - Função com múltiplos parâmetros e decisão (maior)
//    - Função com switch-case (calculadora)
