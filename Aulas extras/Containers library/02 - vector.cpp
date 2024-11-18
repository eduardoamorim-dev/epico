#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO VECTOR =======
    ========================================
    
    O std::vector é um container sequencial que:
    - Armazena elementos em memória contígua
    - Oferece acesso aleatório O(1) aos elementos
    - Crescimento dinâmico automático
    - Inserção/remoção no final O(1) amortizado
    - Inserção/remoção no meio O(n)
    - Realoca memória automaticamente quando necessário
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO VECTOR =======
    =========================================
    
    Construtores:
    - vector<T>: Construtor padrão
    - vector<T>(n): n elementos default
    - vector<T>(n, val): n elementos com valor val
    - vector<T>(first, last): Range de elementos
    
    Elemento e Acesso:
    - at(pos): Acesso com verificação de limites
    - operator[]: Acesso direto sem verificação
    - front(): Primeiro elemento
    - back(): Último elemento
    - data(): Ponteiro para dados internos
    
    Iteradores:
    - begin(), end()
    - rbegin(), rend()
    - cbegin(), cend()
    - crbegin(), crend()
    
    Capacidade:
    - empty(): Verifica se vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo possível
    - capacity(): Capacidade atual
    - reserve(n): Reserva espaço
    - shrink_to_fit(): Reduz capacidade ao tamanho
    
    Modificadores:
    - push_back(): Adiciona no final
    - pop_back(): Remove do final
    - insert(): Insere elementos
    - emplace(): Constrói elemento in-place
    - emplace_back(): Constrói no final
    - erase(): Remove elementos
    - clear(): Remove todos elementos
    - resize(): Altera tamanho
    */
    
    // ================================================
    // Criação e Operações Básicas
    // ================================================
    vector<int> vec;
    
    // Demonstração de inserção
    cout << "1. OPERAÇÕES DE INSERÇÃO:" << endl;
    
    // push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "- Após push_back: ";
    for(const auto& elem : vec) cout << elem << " ";
    cout << endl;
    
    // emplace_back (mais eficiente que push_back)
    vec.emplace_back(40);
    cout << "- Após emplace_back: ";
    for(const auto& elem : vec) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Acesso aos Elementos
    // ================================================
    cout << "\n2. ACESSO AOS ELEMENTOS:" << endl;
    
    // Diferentes formas de acesso
    cout << "- Primeiro elemento (front): " << vec.front() << endl;
    cout << "- Último elemento (back): " << vec.back() << endl;
    cout << "- Elemento índice 2 (at): " << vec.at(2) << endl;
    cout << "- Elemento índice 1 ([]) : " << vec[1] << endl;
    
    // ================================================
    // Capacidade e Tamanho
    // ================================================
    cout << "\n3. INFORMAÇÕES DE CAPACIDADE:" << endl;
    cout << "- Tamanho: " << vec.size() << endl;
    cout << "- Capacidade: " << vec.capacity() << endl;
    cout << "- Está vazio? " << (vec.empty() ? "Sim" : "Não") << endl;
    
    // Demonstração de reserve
    vec.reserve(10);
    cout << "- Capacidade após reserve(10): " << vec.capacity() << endl;
    
    // ================================================
    // Modificadores
    // ================================================
    cout << "\n4. OPERAÇÕES DE MODIFICAÇÃO:" << endl;
    
    // insert
    vec.insert(vec.begin() + 2, 25);
    cout << "- Após insert(2, 25): ";
    for(const auto& elem : vec) cout << elem << " ";
    cout << endl;
    
    // erase
    vec.erase(vec.begin() + 1);
    cout << "- Após erase do segundo elemento: ";
    for(const auto& elem : vec) cout << elem << " ";
    cout << endl;
    
    // resize
    vec.resize(6, 100);  // Aumenta tamanho para 6, preenchendo com 100
    cout << "- Após resize(6, 100): ";
    for(const auto& elem : vec) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Iteração
    // ================================================
    cout << "\n5. DIFERENTES FORMAS DE ITERAÇÃO:" << endl;
    
    // Forward iteration
    cout << "- Iteração normal: ";
    for(auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Reverse iteration
    cout << "- Iteração reversa: ";
    for(auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // ================================================
    // Operações com Algoritmos STL
    // ================================================
    cout << "\n6. OPERAÇÕES COM ALGORITMOS:" << endl;
    
    // sort
    sort(vec.begin(), vec.end());
    cout << "- Após ordenação: ";
    for(const auto& elem : vec) cout << elem << " ";
    cout << endl;
    
    // find
    auto it = find(vec.begin(), vec.end(), 30);
    if(it != vec.end()) {
        cout << "- Elemento 30 encontrado na posição: " 
             << distance(vec.begin(), it) << endl;
    }
    
    // ================================================
    // Limpeza
    // ================================================
    vec.clear();
    cout << "\n7. APÓS CLEAR:" << endl;
    cout << "- Tamanho: " << vec.size() << endl;
    cout << "- Capacidade: " << vec.capacity() << endl;
    
    // shrink_to_fit reduz a capacidade ao tamanho atual
    vec.shrink_to_fit();
    cout << "- Capacidade após shrink_to_fit: " << vec.capacity() << endl;

    return 0;
}
