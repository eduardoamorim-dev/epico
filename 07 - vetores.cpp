// Importação das bibliotecas padrão
#include <iostream>  // Biblioteca para operações de entrada e saída
using namespace std;

// Função principal do programa  
int main() {
   // Declaração do vetor
   int vetor[5];
   
   // Entrada de dados - preenchendo o vetor
   cout << "Digite 5 números inteiros:\n";
   for(int i = 0; i < 5; i++) {
       cout << "Posição " << i << ": ";
       cin >> vetor[i];
   }
   
   // Exibição do vetor original
   cout << "\nVetor digitado: ";
   for(int i = 0; i < 5; i++) {
       cout << vetor[i] << " ";
   }
   
   // Soma dos elementos
   int soma = 0;
   for(int i = 0; i < 5; i++) {
       soma += vetor[i];
   }
   
   // Encontrando o maior valor
   int maior = vetor[0];
   for(int i = 1; i < 5; i++) {
       if(vetor[i] > maior) {
           maior = vetor[i];
       }
   }
   
   // Encontrando o menor valor
   int menor = vetor[0];
   for(int i = 1; i < 5; i++) {
       if(vetor[i] < menor) {
           menor = vetor[i];
       }
   }
   
   // Exibição dos resultados
   cout << "\n\nResultados:";
   cout << "\nSoma dos elementos: " << soma;
   cout << "\nMaior elemento: " << maior;
   cout << "\nMenor elemento: " << menor;
   cout << "\nMédia: " << (float)soma/5;
   
   return 0;
}

// Comentário sobre a estrutura e funcionamento:
// 1. Declaramos um vetor de 5 posições: int vetor[5]
// 2. Preenchemos o vetor usando um loop for
// 3. Exibimos o vetor usando outro loop for
// 4. Calculamos soma percorrendo o vetor
// 5. Encontramos maior e menor valores comparando elementos
// 6. Calculamos média dividindo soma pelo tamanho do vetor
// 7. O programa mostra conceitos de:
//    - Declaração de vetores
//    - Loops for para percorrer vetores
//    - Operações matemáticas com elementos
//    - Busca de valores em vetores
