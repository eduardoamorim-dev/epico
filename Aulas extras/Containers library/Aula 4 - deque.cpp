#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO DEQUE =======
    ========================================
    
    O `std::deque` (double-ended queue) é um container que permite inserção
    e remoção eficiente em ambas as extremidades.
    
    Características:
    - Armazenamento não contíguo em múltiplos chunks de memória
    - Acesso aleatório O(1) aos elementos
    - Inserção/remoção eficiente em ambas as extremidades O(1)
    - Inserção/remoção no meio é menos eficiente O(n)
    - Crescimento dinâmico automático
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO DEQUE =======
    =========================================
    
    Elementos:
    - push_back(): Adiciona no final
    - push_front(): Adiciona no início
    - pop_back(): Remove do final
    - pop_front(): Remove do início
    - emplace_back(): Constrói elemento no final
    - emplace_front(): Constrói elemento no início
    - emplace(): Constrói elemento em posição específica
    
    Acesso:
    - at(): Acesso com verificação de limites
    - operator[]: Acesso direto
    - front(): Primeiro elemento
    - back(): Último elemento
    
    Iteradores:
    - begin(), end()
    - rbegin(), rend()
    - cbegin(), cend()
    - crbegin(), crend()
    
    Capacidade:
    - empty(): Verifica se está vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo possível
    - shrink_to_fit(): Reduz a capacidade ao tamanho atual
    
    Modificadores:
    - assign(): Atribui novos elementos
    - insert(): Insere elementos
    - erase(): Remove elementos
    - clear(): Remove todos elementos
    - resize(): Altera o tamanho
    */
    
    // ================================================
    // Criação e Operações Básicas
    // ================================================
    deque<int> dq;
    
    // Inserções em ambas as extremidades
    dq.push_back(30);    // [30]
    dq.push_front(10);   // [10, 30]
    dq.push_back(40);    // [10, 30, 40]
    dq.push_front(5);    // [5, 10, 30, 40]
    
    cout << "Deque após inserções básicas: ";
    for (const auto& elem : dq) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Acesso aos Elementos
    // ================================================
    cout << "\nAcesso aos elementos:" << endl;
    cout << "Primeiro elemento (front): " << dq.front() << endl;
    cout << "Último elemento (back): " << dq.back() << endl;
    cout << "Elemento na posição 2 (at): " << dq.at(2) << endl;
    cout << "Elemento na posição 1 ([]): " << dq[1] << endl;
    
    // ================================================
    // Remoção de Elementos
    // ================================================
    dq.pop_front();  // Remove primeiro elemento
    dq.pop_back();   // Remove último elemento
    
    cout << "\nDeque após remoções: ";
    for (const auto& elem : dq) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Inserção com emplace
    // ================================================
    dq.emplace_front(2);  // Constrói elemento no início
    dq.emplace_back(50);  // Constrói elemento no final
    dq.emplace(dq.begin() + 1, 7);  // Constrói na posição 1
    
    cout << "\nDeque após emplace: ";
    for (const auto& elem : dq) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Capacidade e Redimensionamento
    // ================================================
    cout << "\nInformações de capacidade:" << endl;
    cout << "Tamanho: " << dq.size() << endl;
    cout << "Está vazio? " << (dq.empty() ? "Sim" : "Não") << endl;
    cout << "Tamanho máximo: " << dq.max_size() << endl;
    
    dq.resize(8, 100);  // Redimensiona para 8 elementos, preenchendo com 100
    cout << "\nDeque após resize: ";
    for (const auto& elem : dq) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Assign e Insert
    // ================================================
    deque<int> dq2;
    dq2.assign(3, 200);  // Atribui 3 elementos com valor 200
    
    cout << "\nDeque2 após assign: ";
    for (const auto& elem : dq2) cout << elem << " ";
    cout << endl;
    
    // Inserindo múltiplos elementos
    dq2.insert(dq2.begin() + 1, {15, 25, 35});
    
    cout << "Deque2 após insert: ";
    for (const auto& elem : dq2) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Algoritmos da STL
    // ================================================
    sort(dq2.begin(), dq2.end());
    cout << "\nDeque2 após ordenação: ";
    for (const auto& elem : dq2) cout << elem << " ";
    cout << endl;
    
    // Iteração reversa
    cout << "Iteração reversa do Deque2: ";
    for (auto it = dq2.rbegin(); it != dq2.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // ================================================
    // Erase e Clear
    // ================================================
    dq2.erase(dq2.begin() + 1);  // Remove segundo elemento
    cout << "\nDeque2 após erase: ";
    for (const auto& elem : dq2) cout << elem << " ";
    cout << endl;
    
    dq2.clear();  // Remove todos os elementos
    cout << "Tamanho após clear: " << dq2.size() << endl;
    
    // ================================================
    // Swap
    // ================================================
    deque<int> dq3 = {1, 2, 3};
    deque<int> dq4 = {7, 8, 9};
    
    cout << "\nAntes do swap:" << endl;
    cout << "dq3: ";
    for (const auto& elem : dq3) cout << elem << " ";
    cout << "\ndq4: ";
    for (const auto& elem : dq4) cout << elem << " ";
    
    dq3.swap(dq4);
    
    cout << "\n\nDepois do swap:" << endl;
    cout << "dq3: ";
    for (const auto& elem : dq3) cout << elem << " ";
    cout << "\ndq4: ";
    for (const auto& elem : dq4) cout << elem << " ";
    cout << endl;
    
    return 0;
}
