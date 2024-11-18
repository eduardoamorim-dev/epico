#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO MULTIMAP =======
    ========================================
    
    O std::multimap é um container associativo que:
    - Armazena pares de chave-valor (key-value pairs)
    - Permite múltiplas chaves idênticas
    - Mantém os elementos automaticamente ordenados pela chave
    - Implementado tipicamente como árvore rubro-negra
    - Inserção, remoção e busca com complexidade logarítmica O(log n)
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO MULTIMAP =======
    =========================================
    
    Construtores:
    - multimap<K,T>: Construtor padrão
    - multimap<K,T>(comp): Com comparador personalizado
    - multimap<K,T>(first, last): Range de elementos
    
    Inserção:
    - insert(value): Insere elemento
    - insert(pos, value): Insere com hint de posição
    - insert(first, last): Insere range de elementos
    - emplace(): Constrói elemento in-place
    - emplace_hint(): Constrói com hint de posição
    
    Acesso/Busca:
    - find(key): Encontra elemento por chave
    - count(key): Conta elementos com chave
    - lower_bound(key): Iterator para primeiro elemento >= key
    - upper_bound(key): Iterator para primeiro elemento > key
    - equal_range(key): Par de iterators (lower_bound, upper_bound)
    
    Remoção:
    - erase(pos): Remove elemento em posição
    - erase(key): Remove elementos com chave
    - erase(first, last): Remove range
    - clear(): Remove todos elementos
    
    Iteradores:
    - begin(), end(): Iteradores normais
    - rbegin(), rend(): Iteradores reversos
    - cbegin(), cend(): Iteradores const
    - crbegin(), crend(): Iteradores reversos const
    
    Capacidade:
    - empty(): Verifica se está vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo possível
    
    Observadores:
    - key_comp(): Objeto de comparação de chaves
    - value_comp(): Objeto de comparação de elementos
    */
    
    // ================================================
    // Criação e Operações Básicas
    // ================================================
    multimap<string, int> notas;
    
    // Demonstração de diferentes formas de inserção
    notas.insert(pair<string, int>("João", 85));            // Com pair
    notas.insert(make_pair("Maria", 90));                   // Com make_pair
    notas.emplace("João", 75);                             // Com emplace
    notas.emplace_hint(notas.begin(), "Maria", 95);        // Com emplace_hint
    
    cout << "Multimap após inserções básicas:" << endl;
    for (const auto& nota : notas) {
        cout << nota.first << ": " << nota.second << endl;
    }
    
    // ================================================
    // Demonstração de Busca e Acesso
    // ================================================
    cout << "\nOperações de Busca:" << endl;
    
    // Contando elementos
    cout << "Notas do João: " << notas.count("João") << endl;
    
    // Encontrando elementos
    auto it = notas.find("Maria");
    if (it != notas.end()) {
        cout << "Primeira nota da Maria: " << it->second << endl;
    }
    
    // Demonstração de equal_range
    auto range = notas.equal_range("João");
    cout << "Todas as notas do João: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;
    
    // ================================================
    // Demonstração de Bounds
    // ================================================
    cout << "\nDemonstração de Bounds:" << endl;
    
    auto lower = notas.lower_bound("João");
    auto upper = notas.upper_bound("João");
    
    cout << "Elementos entre lower_bound e upper_bound de 'João':" << endl;
    for (auto it = lower; it != upper; ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    
    // ================================================
    // Modificadores e Remoção
    // ================================================
    cout << "\nOperações de Modificação e Remoção:" << endl;
    
    // Removendo por chave
    size_t removed = notas.erase("João");
    cout << "Elementos removidos: " << removed << endl;
    
    // Removendo por iterator
    if (!notas.empty()) {
        notas.erase(notas.begin());
    }
    
    // ================================================
    // Capacidade e Informações
    // ================================================
    cout << "\nInformações do Container:" << endl;
    cout << "Tamanho: " << notas.size() << endl;
    cout << "Está vazio? " << (notas.empty() ? "Sim" : "Não") << endl;
    cout << "Tamanho máximo: " << notas.max_size() << endl;
    
    // ================================================
    // Comparadores
    // ================================================
    auto key_comp = notas.key_comp();
    auto value_comp = notas.value_comp();
    
    // Demonstração de comparação
    if (key_comp("Ana", "Maria")) {
        cout << "\n'Ana' vem antes de 'Maria' na ordenação" << endl;
    }
    
    return 0;
}
