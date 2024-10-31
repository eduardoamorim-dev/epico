#include <iostream>
using namespace std;

int main() {
    
    // Estrutura for para iterar de 1 a 5
    for (int i = 1; i <= 5; i++) { // Inicializa i com 1; condição i <= 5; incrementa i em cada iteração
        cout << "Número: " << i << endl; // Exibe o valor de i
    }


    // Definindo um array de inteiros com 5 elementos
    int numeros[5] = {5, 10, 15, 20, 25}; // Inicializa o array com valores
    
    int n = 5; // Tamanho do array (número de elementos)

    // Multiplica cada elemento do array por 2, começando do índice 1 até n - 1
    for (int i = 1; i < n - 1; i++) { // Loop começando em 1 e indo até 3 (n-2)
        numeros[i] *= 2; // Multiplica o elemento atual por 2
    }

    // Exibe o array modificado
    cout << "Vetor após multiplicação dos elementos de índice 1 a " << n - 2 << ":" << endl;
    for (int i = 0; i < n; i++) { // Loop para percorrer todos os elementos do array
        cout << numeros[i] << " "; // Exibe cada elemento do array
    }
    
    cout << endl; // Pula uma linha após exibir todos os elementos

    return 0; // Indica que o programa terminou com sucesso
