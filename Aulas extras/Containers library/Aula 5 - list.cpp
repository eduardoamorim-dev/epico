#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DA LIST =======
    ========================================
    
    O `std::list` é uma lista duplamente encadeada que permite inserção
    e remoção eficiente em qualquer posição.
    
    Características:
    - Não possui acesso aleatório
    - Inserção/remoção em qualquer posição é O(1)
    - Elementos não são armazenados contiguamente
    - Iteração bidirecional
    - Não invalidação de iteradores após inserção/remoção
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NA LIST =======
    =========================================
    
    Elementos:
    - push_back(): Adiciona no final
    - push_front(): Adiciona no início
    - pop_back(): Remove do final
    - pop_front(): Remove do início
    - emplace_back(): Constrói no final
    - emplace_front(): Constrói no início
    - emplace(): Constrói em posição específica
    
    Acesso:
    - front(): Primeiro elemento
    - back(): Último elemento
    
    Iteradores:
    - begin(), end()
    - rbegin(), rend()
    - cbegin(), cend()
    - crbegin(), crend()
    
    Capacidade:
    - empty(): Verifica se está vazia
    - size(): Número de elementos
    - max_size(): Tamanho máximo possível
    
    Modificadores:
    - assign(): Atribui novos elementos
    - insert(): Insere elementos
    - erase(): Remove elementos
    - clear(): Remove todos elementos
    - resize(): Altera o tamanho
    
    Operações Específicas:
    - splice(): Move elementos de outra list
    - remove(): Remove elementos por valor
    - remove_if(): Remove elementos por condição
    - unique(): Remove elementos duplicados
    - merge(): Mescla duas lists ordenadas
    - sort(): Ordena elementos
    - reverse(): Inverte a ordem
    */
    
    // ================================================
    // Criação e Operações Básicas
    // ================================================
    list<int> lst;
    
    // Inserções
    lst.push_back(30);     // [30]
    lst.push_front(10);    // [10, 30]
    lst.push_back(40);     // [10, 30, 40]
    lst.push_front(5);     // [5, 10, 30, 40]
    
    cout << "Lista após inserções básicas: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Acesso aos Elementos
    // ================================================
    cout << "\nAcesso aos elementos:" << endl;
    cout << "Primeiro elemento (front): " << lst.front() << endl;
    cout << "Último elemento (back): " << lst.back() << endl;
    
    // ================================================
    // Remoção de Elementos
    // ================================================
    lst.pop_front();  // Remove primeiro elemento
    lst.pop_back();   // Remove último elemento
    
    cout << "\nLista após remoções: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Inserção com emplace
    // ================================================
    lst.emplace_front(2);  // Constrói elemento no início
    lst.emplace_back(50);  // Constrói elemento no final
    auto it = lst.begin();
    advance(it, 1);
    lst.emplace(it, 7);    // Constrói na segunda posição
    
    cout << "\nLista após emplace: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Capacidade e Redimensionamento
    // ================================================
    cout << "\nInformações de capacidade:" << endl;
    cout << "Tamanho: " << lst.size() << endl;
    cout << "Está vazia? " << (lst.empty() ? "Sim" : "Não") << endl;
    cout << "Tamanho máximo: " << lst.max_size() << endl;
    
    lst.resize(8, 100);  // Redimensiona para 8 elementos, preenchendo com 100
    
    cout << "\nLista após resize: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Operações Específicas da List
    // ================================================
    
    // Remove
    lst.remove(100);  // Remove todos os elementos com valor 100
    
    cout << "\nLista após remove(100): ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // Remove_if
    lst.remove_if([](int n) { return n > 30; });  // Remove elementos maiores que 30
    
    cout << "Lista após remove_if: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // Unique
    lst.push_back(2);
    lst.push_back(2);
    lst.sort();  // Necessário ordenar antes de unique
    lst.unique();  // Remove elementos duplicados consecutivos
    
    cout << "\nLista após unique: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Splice
    // ================================================
    list<int> lst2 = {100, 200, 300};
    
    cout << "\nAntes do splice:" << endl;
    cout << "lst: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << "\nlst2: ";
    for (const auto& elem : lst2) cout << elem << " ";
    
    lst.splice(lst.begin(), lst2);  // Move todos elementos de lst2 para o início de lst
    
    cout << "\n\nDepois do splice:" << endl;
    cout << "lst: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << "\nlst2 (vazia): ";
    for (const auto& elem : lst2) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Merge
    // ================================================
    list<int> lst3 = {1, 3, 5};
    list<int> lst4 = {2, 4, 6};
    
    lst3.merge(lst4);  // Mescla lst4 em lst3 (ambas devem estar ordenadas)
    
    cout << "\nLista após merge: ";
    for (const auto& elem : lst3) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Sort e Reverse
    // ================================================
    lst.sort();  // Ordena a lista
    cout << "\nLista após sort: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    lst.reverse();  // Inverte a ordem
    cout << "Lista após reverse: ";
    for (const auto& elem : lst) cout << elem << " ";
    cout << endl;
    
    return 0;
}
