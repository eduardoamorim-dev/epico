#include <iostream>
#include <set>
#include <string>

using namespace std;

// Estrutura personalizada para demonstrar set com objetos complexos
struct Pessoa {
    string nome;
    int idade;
    
    // Operador de comparação necessário para o set
    bool operator<(const Pessoa& other) const {
        if (idade != other.idade)
            return idade < other.idade;
        return nome < other.nome;
    }
};

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO SET =======
    ========================================
    
    O `std::set` é um container associativo que armazena elementos únicos
    ordenados automaticamente.
    
    Características:
    - Elementos sempre ordenados
    - Elementos únicos (não permite duplicatas)
    - Implementado como árvore binária balanceada
    - Busca, inserção e remoção em O(log n)
    - Não permite modificação dos elementos após inserção
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO SET =======
    =========================================
    
    Inserção:
    - insert(): Insere elemento
    - emplace(): Constrói e insere elemento
    - emplace_hint(): Constrói e insere com dica de posição
    
    Remoção:
    - erase(): Remove elemento
    - clear(): Remove todos elementos
    
    Busca:
    - find(): Encontra elemento
    - count(): Conta ocorrências (0 ou 1)
    - contains(): Verifica se contém (C++20)
    - lower_bound(): Primeiro elemento não menor
    - upper_bound(): Primeiro elemento maior
    - equal_range(): Par de iteradores do range
    
    Capacidade:
    - empty(): Verifica se vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo possível
    
    Iteradores:
    - begin(), end()
    - rbegin(), rend()
    - cbegin(), cend()
    - crbegin(), crend()
    */
    
    // ================================================
    // Criação e Inserção Básica
    // ================================================
    set<int> numSet;
    
    // Inserção básica
    numSet.insert(30);
    numSet.insert(10);
    numSet.insert(20);
    numSet.insert(10);  // Tentativa de duplicata - será ignorada
    
    cout << "Set após inserções básicas: ";
    for (const auto& num : numSet) cout << num << " ";
    cout << endl;
    
    // ================================================
    // Emplace e Insert com Hint
    // ================================================
    numSet.emplace(15);  // Constrói e insere
    auto hint = numSet.end();
    numSet.emplace_hint(hint, 40);  // Inserção com dica de posição
    
    cout << "\nSet após emplace: ";
    for (const auto& num : numSet) cout << num << " ";
    cout << endl;
    
    // ================================================
    // Busca e Acesso
    // ================================================
    auto it = numSet.find(20);
    if (it != numSet.end())
        cout << "\nEncontrado: " << *it << endl;
    
    cout << "Contagem de 10: " << numSet.count(10) << endl;
    cout << "Contagem de 100: " << numSet.count(100) << endl;
    
    // Lower e Upper bound
    auto lower = numSet.lower_bound(15);
    auto upper = numSet.upper_bound(15);
    
    cout << "Lower bound de 15: " << *lower << endl;
    cout << "Upper bound de 15: " << *upper << endl;
    
    // Equal range
    auto range = numSet.equal_range(15);
    cout << "Equal range de 15: " << *range.first << " até " << *range.second << endl;
    
    // ================================================
    // Set com Objetos Complexos
    // ================================================
    set<Pessoa> pessoas;
    
    pessoas.insert({"João", 25});
    pessoas.insert({"Maria", 30});
    pessoas.insert({"Pedro", 20});
    pessoas.emplace("Ana", 35);
    
    cout << "\nPessoas ordenadas por idade:" << endl;
    for (const auto& p : pessoas)
        cout << p.nome << ": " << p.idade << " anos" << endl;
    
    // ================================================
    // Capacidade e Informações
    // ================================================
    cout << "\nInformações do set:" << endl;
    cout << "Tamanho: " << numSet.size() << endl;
    cout << "Está vazio? " << (numSet.empty() ? "Sim" : "Não") << endl;
    cout << "Tamanho máximo: " << numSet.max_size() << endl;
    
    // ================================================
    // Remoção de Elementos
    // ================================================
    numSet.erase(15);  // Remove elemento específico
    auto it_to_erase = numSet.find(30);
    if (it_to_erase != numSet.end())
        numSet.erase(it_to_erase);  // Remove usando iterator
    
    cout << "\nSet após remoções: ";
    for (const auto& num : numSet) cout << num << " ";
    cout << endl;
    
    // ================================================
    // Operações com Sets
    // ================================================
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {4, 5, 6, 7, 8};
    
    cout << "\nOperações entre sets:" << endl;
    
    // Verificar interseção
    cout << "Elementos em comum: ";
    for (const auto& elem : set1) {
        if (set2.count(elem) > 0)
            cout << elem << " ";
    }
    cout << endl;
    
    // ================================================
    // Iteração Reversa
    // ================================================
    cout << "\nIteração reversa do set: ";
    for (auto it = numSet.rbegin(); it != numSet.rend(); ++it)
        cout << *it << " ";
    cout << endl;
    
    // ================================================
    // Clear
    // ================================================
    numSet.clear();
    cout << "\nTamanho após clear(): " << numSet.size() << endl;
    
    return 0;
}
