#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO ARRAY =======
    ========================================
    
    O `std::array` é um container que encapsula arrays de tamanho fixo.
    É uma alternativa mais segura e moderna aos arrays C tradicionais.
    
    Características:
    - Tamanho fixo definido em tempo de compilação
    - Elementos armazenados contiguamente na memória
    - Acesso direto aos elementos através de índices
    - Não há alocação dinâmica de memória
    - Pode ser copiado e atribuído de forma segura
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO ARRAY =======
    =========================================
    
    Acesso aos elementos:
    - at(): Acesso com verificação de limites
    - operator[]: Acesso direto sem verificação
    - front(): Primeiro elemento
    - back(): Último elemento
    - data(): Ponteiro para os dados
    
    Iteradores:
    - begin(), end()
    - rbegin(), rend()
    - cbegin(), cend()
    - crbegin(), crend()
    
    Capacidade:
    - empty(): Verifica se está vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo possível
    
    Operações:
    - fill(): Preenche com valor específico
    - swap(): Troca conteúdo com outro array
    
    ==========================================
    ======= ESTRUTURA DO ARRAY NO C++ ========
    ==========================================
    
    // Declaração de um array:
    // array<tipo, tamanho> nomeDoArray;
    */
    
    // ================================================
    // Criação e Inicialização
    // ================================================
    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    array<int, 5> arr2;
    arr2.fill(10);  // Preenche todo o array com 10
    
    // ================================================
    // Métodos de Acesso
    // ================================================
    cout << "Acessando elementos:" << endl;
    cout << "Primeiro elemento (front): " << arr1.front() << endl;
    cout << "Último elemento (back): " << arr1.back() << endl;
    cout << "Elemento na posição 2 (at): " << arr1.at(2) << endl;
    cout << "Elemento na posição 3 ([]) : " << arr1[3] << endl;
    
    // ================================================
    // Iteração
    // ================================================
    cout << "\nIteração normal:" << endl;
    for (auto it = arr1.begin(); it != arr1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Iteração reversa:" << endl;
    for (auto it = arr1.rbegin(); it != arr1.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // ================================================
    // Informações de Capacidade
    // ================================================
    cout << "\nInformações de capacidade:" << endl;
    cout << "Tamanho: " << arr1.size() << endl;
    cout << "Tamanho máximo: " << arr1.max_size() << endl;
    cout << "Está vazio? " << (arr1.empty() ? "Sim" : "Não") << endl;
    
    // ================================================
    // Operações com Arrays
    // ================================================
    cout << "\nAntes do swap:" << endl;
    cout << "arr1: ";
    for (const auto& elem : arr1) cout << elem << " ";
    cout << "\narr2: ";
    for (const auto& elem : arr2) cout << elem << " ";
    
    arr1.swap(arr2);
    
    cout << "\n\nDepois do swap:" << endl;
    cout << "arr1: ";
    for (const auto& elem : arr1) cout << elem << " ";
    cout << "\narr2: ";
    for (const auto& elem : arr2) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Algoritmos da STL com Array
    // ================================================
    sort(arr2.begin(), arr2.end());  // Ordena o array
    reverse(arr2.begin(), arr2.end());  // Inverte a ordem
    
    cout << "\nArray após sort e reverse:" << endl;
    for (const auto& elem : arr2) {
        cout << elem << " ";
    }
    cout << endl;
    
    // ================================================
    // Comparações
    // ================================================
    array<int, 5> arr3 = {1, 2, 3, 4, 5};
    array<int, 5> arr4 = {1, 2, 3, 4, 5};
    
    cout << "\nComparações:" << endl;
    cout << "arr3 == arr4: " << (arr3 == arr4) << endl;
    cout << "arr3 < arr4: " << (arr3 < arr4) << endl;
    
    return 0;
}
