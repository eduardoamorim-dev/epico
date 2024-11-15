#include <iostream>
#include <map>
#include <string>
using namespace std;

// Estrutura personalizada para valor complexo
struct InfoAluno {
    double nota;
    int faltas;
    
    InfoAluno(double n = 0.0, int f = 0) : nota(n), faltas(f) {}
};

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO MAP =======
    ========================================
    
    O `std::map` é um container associativo que armazena pares
    chave-valor ordenados pela chave.
    
    Características:
    - Chaves únicas e ordenadas
    - Pares chave-valor (std::pair)
    - Implementado como árvore binária balanceada
    - Busca, inserção e remoção em O(log n)
    - Acesso por chave eficiente
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO MAP =======
    =========================================
    
    Inserção:
    - insert(): Insere par
    - emplace(): Constrói e insere par
    - emplace_hint(): Constrói e insere com dica
    - operator[]: Acesso/inserção por chave
    - at(): Acesso seguro por chave
    
    Remoção:
    - erase(): Remove elemento(s)
    - clear(): Remove todos elementos
    
    Busca:
    - find(): Encontra elemento
    - count(): Conta ocorrências (0 ou 1)
    - contains(): Verifica se contém (C++20)
    - lower_bound(): Primeiro não menor
    - upper_bound(): Primeiro maior
    - equal_range(): Par de iteradores
    
    Capacidade:
    - empty(): Verifica se vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo
    */
    
    // ================================================
    // Criação e Inserção Básica
    // ================================================
    map<string, int> idade_pessoas;
    
    // Diferentes formas de inserção
    idade_pessoas.insert({"Ana", 25});
    idade_pessoas.insert(make_pair("Bob", 30));
    idade_pessoas["Carlos"] = 35;  // Usando operator[]
    idade_pessoas.emplace("Diana", 28);
    
    cout << "Map inicial:" << endl;
    for (const auto& [nome, idade] : idade_pessoas)
        cout << nome << ": " << idade << " anos" << endl;
    
    // ================================================
    // Acesso e Modificação
    // ================================================
    // Usando operator[]
    idade_pessoas["Ana"] = 26;  // Modificando valor existente
    
    // Usando at() (lança exceção se chave não existe)
    try {
        cout << "\nIdade de Bob: " << idade_pessoas.at("Bob") << endl;
        idade_pessoas.at("Bob") = 31;
    } catch (const out_of_range& e) {
        cout << "Chave não encontrada!" << endl;
    }
    
    // ================================================
    // Map com Objeto Complexo
    // ================================================
    map<string, InfoAluno> alunos;
    
    // Inserindo elementos
    alunos.insert({"João", InfoAluno(8.5, 2)});
    alunos.emplace("Maria", InfoAluno(9.0, 1));
    alunos["Pedro"] = InfoAluno(7.5, 3);
    
    cout << "\nInformações dos alunos:" << endl;
    for (const auto& [nome, info] : alunos) {
        cout << nome << " - Nota: " << info.nota 
             << ", Faltas: " << info.faltas << endl;
    }
    
    // ================================================
    // Busca e Verificação
    // ================================================
    string busca = "Maria";
    auto it = alunos.find(busca);
    
    if (it != alunos.end()) {
        cout << "\nEncontrado " << it->first 
             << " - Nota: " << it->second.nota << endl;
    }
    
    cout << "Contagem de 'João': " << alunos.count("João") << endl;
    
    // ================================================
    // Lower Bound e Upper Bound
    // ================================================
    auto lower = idade_pessoas.lower_bound("Bob");
    auto upper = idade_pessoas.upper_bound("Bob");
    
    cout << "\nElementos entre Bob (inclusive) e próximo nome:" << endl;
    for (auto it = lower; it != upper; ++it)
        cout << it->first << ": " << it->second << endl;
    
    // ================================================
    // Remoção de Elementos
    // ================================================
    // Removendo por chave
    size_t removed = idade_pessoas.erase("Ana");
    cout << "\nElementos removidos: " << removed << endl;
    
    // Removendo por iterator
    it = alunos.find("Pedro");
    if (it != alunos.end())
        alunos.erase(it);
    
    cout << "Map após remoções:" << endl;
    for (const auto& [nome, idade] : idade_pessoas)
        cout << nome << ": " << idade << endl;
    
    // ================================================
    // Operações com Maps
    // ================================================
    map<string, int> map1 = {{"A", 1}, {"B", 2}};
    map<string, int> map2 = {{"B", 3}, {"C", 4}};
    
    cout << "\nComparando valores entre maps:" << endl;
    for (const auto& [key, value] : map1) {
        auto it = map2.find(key);
        if (it != map2.end()) {
            cout << "Chave '" << key << "' presente em ambos: "
                 << value << " vs " << it->second << endl;
        }
    }
    
    // ================================================
    // Iteração Reversa
    // ================================================
    cout << "\nIteração reversa do map:" << endl;
    for (auto it = idade_pessoas.rbegin(); it != idade_pessoas.rend(); ++it)
        cout << it->first << ": " << it->second << endl;
    
    // ================================================
    // Capacidade e Clear
    // ================================================
    cout << "\nInformações de capacidade:" << endl;
    cout << "Tamanho: " << idade_pessoas.size() << endl;
    cout << "Está vazio? " << (idade_pessoas.empty() ? "Sim" : "Não") << endl;
    cout << "Tamanho máximo: " << idade_pessoas.max_size() << endl;
    
    idade_pessoas.clear();
    cout << "Tamanho após clear(): " << idade_pessoas.size() << endl;
    
    return 0;
}