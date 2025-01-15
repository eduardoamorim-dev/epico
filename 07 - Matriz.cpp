// Importação das bibliotecas padrão
#include <iostream>  // Biblioteca para operações de entrada e saída
#include <iomanip>   // Biblioteca para formatação de saída

// Namespace padrão
using namespace std;

// Função principal do programa
int main() {
    // Declaração da matriz 3x3
    int matriz[3][3];
    
    // Entrada de dados na matriz
    cout << "Digite os valores para a matriz 3x3:" << endl;
    
    // Loop para percorrer as linhas
    for(int i = 0; i < 3; i++) {
        // Loop para percorrer as colunas
        for(int j = 0; j < 3; j++) {
            cout << "Posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    // Exibição da matriz formatada
    cout << "\nMatriz digitada:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }
    
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}

// Comentário sobre a estrutura e funcionamento:
// 1. Definimos uma matriz 3x3 usando: int matriz[3][3]
// 2. Primeiro loop 'i' controla as linhas da matriz
// 3. Segundo loop 'j' controla as colunas da matriz
// 4. matriz[i][j] acessa cada posição individualmente
// 5. setw(4) da biblioteca iomanip formata a saída com espaçamento uniforme
// 6. Após cada linha (i), usamos endl para quebrar linha na exibição
