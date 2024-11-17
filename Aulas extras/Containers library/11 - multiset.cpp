#include <iostream>
#include <multiset>
#include <string>
using namespace std;

// Estrutura personalizada para demonstrar multiset com objetos complexos
struct Livro {
    string titulo;
    double preco;
    
    bool operator<(const Livro& other) const {
        if (preco != other.preco)
            return preco < other.preco;
        return titulo < other.titulo;
    }
};

int main() {
    /*
    ==========================================
    ======= CONCEITO TEÓRICO DO MULTISET =======
    ==========================================
    
    O `std::multiset` é similar ao set, mas permite elementos duplicados.
    
    Características:
    - Elementos sempre ordenados
    - Permite elementos duplicados
    - Implementado como árvore binária balanceada
    - Busca, inserção e remoção em O(log n)
    - Mantém a ordem de elementos iguais
    
    ===========================================
    ======= MÉTODOS DISPONÍVEIS NO MULTISET =======
    ===========================================
    
    Inserção:
    - insert(): Insere elemento
    - emplace(): Constrói e insere elemento
    - emplace_hint(): Constrói e insere com dica
    
    Remoção:
    - erase(): Remove elemento(s)
    - clear(): Remove todos elementos
    
    Busca:
    - find(): Encontra elemento
    - count(): Conta ocorrências
    - lower_bound(): Primeiro elemento não menor
    - upper_bound(): Primeiro elemento maior
    - equal_range(): Range de elementos iguais
    
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
    multiset<int> mset;
    
    // Inserções com duplicatas
    mset.insert(30);
    mset.insert(20);
    mset.insert(30);  // Duplicata permitida
    mset.insert(10);
    mset.insert(20);  // Outra duplicata
    
    cout << "Multiset após inserções: ";
    for (const auto& num : mset)
        cout << num << " ";
    cout << endl;
    
    // ================================================
    // Emplace e Insert com Hint
    // ================================================
    mset.emplace(15);  // Constrói e insere
    auto hint = mset.end();
    mset.emplace_hint(hint, 15);  // Inserção com dica de posição
    
    cout << "\nMultiset após emplace: ";
    for (const auto& num : mset)
        cout << num << " ";
    cout << endl;
    
    // ================================================
    // Contagem e Busca
    // ================================================
    cout << "\nContagem de elementos:" << endl;
    cout << "Número de 20s: " << mset.count(20) << endl;
    cout << "Número de 30s: " << mset.count(30) << endl;
    
    // Find e iteração sobre elementos iguais
    auto range = mset.equal_range(20);
    cout << "Elementos iguais a 20: ";
    for (auto it = range.first; it != range.second; ++it)
        cout << *it << " ";
    cout << endl;
    
    // ================================================
    // Multiset com Objetos Complexos
    // ================================================
    multiset<Livro> livros;
    
    livros.insert({"Dom Casmurro", 45.90});
    livros.insert({"1984", 35.90});
    livros.insert({"O Senhor dos Anéis", 35.90});  // Mesmo preço
    livros.insert({"1984", 35.90});  // Duplicata
    
    cout << "\nLivros ordenados por preço:" << endl;
    for (const auto& livro : livros)
        cout << livro.titulo << ": R$" << livro.preco << endl;
    
    // ================================================
    // Lower Bound e Upper Bound
    // ================================================
    auto lower = mset.lower_bound(20);
    auto upper = mset.upper_bound(20);
    
    cout << "\nElementos entre lower_bound(20) e upper_bound(20): ";
    for (auto it = lower; it != upper; ++it)
        cout << *it << " ";
    cout << endl;
    
    // ================================================
    // Remoção Seletiva
    // ================================================
    size_t removed = mset.erase(20);  // Remove todas ocorrências de 20
    cout << "\nNúmero de elementos removidos: " << removed << endl;
    
    cout << "Multiset após remoção: ";
    for (const auto& num : mset)
        cout << num << " ";
    cout << endl;
    
    // ================================================
    // Iteração Reversa
    // ================================================
    cout << "\nIteração reversa: ";
    for (auto it = mset.rbegin(); it != mset.rend(); ++it)
        cout << *it << " ";
    cout << endl;
    
    // ================================================
    // Operações de Conjunto
    // ================================================
    multiset<int> mset1 = {1, 1, 2, 2, 3};
    multiset<int> mset2 = {2, 2, 3, 3, 4};
    
    cout << "\nElementos comuns (com duplicatas): ";
    for (const auto& elem : mset1) {
        auto count1 = mset1.count(elem);
        auto count2 = mset2.count(elem);
        if (count2 > 0) {
            for (size_t i = 0; i < min(count1, count2); ++i)
                cout << elem << " ";
        }
    }
    cout << endl;
    
    // ================================================
    // Capacidade e Clear
    // ================================================
    cout << "\nInformações de capacidade:" << endl;
    cout << "Tamanho: " << mset.size() << endl;
    cout << "Está vazio? " << (mset.empty() ? "Sim" : "Não") << endl;
    cout << "Tamanho máximo: " << mset.max_size() << endl;
    
    mset.clear();
    cout << "Tamanho após clear(): " << mset.size() << endl;
    
    return 0;
}