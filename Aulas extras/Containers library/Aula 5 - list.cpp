#include <iostream>
#include <list>
#include <algorithm>  // Para std::sort, std::reverse

using namespace std;

int main() {

    /*
    ========================================
    ======= CONCEITO TEÓRICO DA LISTA =======
    ========================================
    
    A `list` em C++ é uma estrutura de dados baseada em uma lista duplamente encadeada. 
    Cada elemento contém dois ponteiros: um para o próximo e outro para o anterior. 
    Isso permite inserções e remoções eficientes em qualquer posição da lista.
    
    Características:
    - Acesso sequencial aos elementos.
    - Inserções e remoções rápidas em qualquer lugar da lista.
    - Não há acesso aleatório (como em vetores).
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NA LISTA =======
    =========================================
    
    - `push_back()`: Adiciona um elemento no final.
    - `push_front()`: Adiciona um elemento no início.
    - `pop_back()`: Remove o último elemento.
    - `pop_front()`: Remove o primeiro elemento.
    - `size()`: Retorna o número de elementos na lista.
    - `empty()`: Verifica se a lista está vazia.
    - `front()`: Retorna o primeiro elemento.
    - `back()`: Retorna o último elemento.
    - `insert()`: Insere um elemento em uma posição específica.
    - `erase()`: Remove um elemento de uma posição específica.
    - `clear()`: Remove todos os elementos da lista.
    - `splice()`: Move elementos de uma lista para outra.
    - `remove()`: Remove todas as ocorrências de um valor específico.
    - `unique()`: Remove elementos duplicados consecutivos.
    - `sort()`: Ordena os elementos da lista.
    - `reverse()`: Inverte a ordem dos elementos.
    - `emplace_back()`: Adiciona um elemento no final de maneira eficiente.
    - `emplace_front()`: Adiciona um elemento no início de maneira eficiente.
    - `swap()`: Troca os conteúdos de duas listas.
    - `merge()`: Mescla duas listas ordenadas.
    - `begin()`, `end()`, `rbegin()`, `rend()`: Iteradores para percorrer a lista.

    ==========================================
    ======= ESTRUTURA DA LISTA NO C++ ========
    ==========================================
    
    // Declaração de uma lista:
    // list<tipo do elemento> nomeDaLista;
    
    */

    list<int> lst;  // Criação de uma lista de inteiros

    // ================================================
    // Adicionar elementos na lista
    // ================================================

    // Adicionando elementos no final da lista - método .push_back();
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    // Adicionando elementos no início da lista - método .push_front();
    lst.push_front(5);  // Adiciona 5 ao início da lista

    // Exibindo os elementos da lista após inserções
    cout << "Elementos após push_back() e push_front(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Remover elementos da lista
    // ================================================

    // Remover o último elemento da lista - método .pop_back();
    lst.pop_back();

    // Remover o primeiro elemento da lista - método .pop_front();
    lst.pop_front();

    // Exibindo os elementos após remoções
    cout << "Elementos após pop_back() e pop_front(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Operações de Tamanho e Verificação
    // ================================================

    // Verificando o tamanho da lista - método .size();
    cout << "Tamanho da lista: " << lst.size() << endl;

    // Verificando se a lista está vazia - método .empty();
    if (lst.empty()) {
        cout << "A lista está vazia." << endl;
    } else {
        cout << "A lista não está vazia." << endl;
    }

    // ================================================
    // Acessar o primeiro e o último elemento
    // ================================================

    // Adicionando mais elementos
    lst.push_back(40);
    lst.push_back(50);
    lst.push_back(60);

    // Exibindo o primeiro e o último elemento - métodos .front() e .back();
    cout << "Primeiro elemento: " << lst.front() << endl;
    cout << "Último elemento: " << lst.back() << endl;

    // ================================================
    // Inserir e Remover em posições específicas
    // ================================================

    // Inserindo um elemento em uma posição específica - método .insert();
    auto it = lst.begin();  // Obtém o iterador para o primeiro elemento
    lst.insert(it, 15);  // Adiciona 15 antes do primeiro elemento

    // Exibindo os elementos após a inserção
    cout << "Elementos após insert(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Remover um elemento da lista - método .erase();
    it = lst.begin();
    lst.erase(it);  // Remove o primeiro elemento

    // Exibindo os elementos após a remoção
    cout << "Elementos após erase(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Limpar todos os elementos da lista
    // ================================================

    // Limpar todos os elementos da lista - método .clear();
    lst.clear();
    cout << "Tamanho da lista após clear(): " << lst.size() << endl;

    // ================================================
    // Operações Avançadas com a Lista
    // ================================================

    // Recriar a lista com elementos para outros exemplos
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    lst.push_back(20);

    // Remover todas as ocorrências de um valor específico - método .remove();
    lst.remove(20);  // Remove todas as ocorrências de 20
    cout << "Elementos após remove(20): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Remover duplicatas consecutivas - método .unique();
    lst.push_back(40);
    lst.push_back(40);
    lst.unique();  // Remove duplicatas consecutivas
    cout << "Elementos após unique(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Ordenar a lista - método .sort();
    lst.sort();
    cout << "Elementos após sort(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // Reverter a lista - método .reverse();
    lst.reverse();
    cout << "Elementos após reverse(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Adicionar Elementos de Forma Eficiente
    // ================================================

    // Adicionar elementos no final e no início de maneira eficiente
    lst.emplace_back(60);  // Adiciona 60 ao final
    lst.emplace_front(0); // Adiciona 0 ao início

    // Exibindo a lista após emplace
    cout << "Elementos após emplace_back() e emplace_front(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Trocar Conteúdos de Duas Listas
    // ================================================

    list<int> lst2 = {100, 200, 300};
    lst.swap(lst2);  // Troca os conteúdos das duas listas
    cout << "Elementos após swap(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Mesclar Duas Listas Ordenadas
    // ================================================

    lst.push_back(400);
    lst.push_back(500);
    lst2.push_back(50);
    lst2.push_back(150);
    lst.merge(lst2);  // Mescla lst2 em lst de forma ordenada
    cout << "Elementos após merge(): ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // ================================================
    // Iteradores para Percorrer a Lista
    // ================================================

    cout << "Primeiro elemento com begin(): " << *lst.begin() << endl;
    cout << "Último elemento com rbegin(): " << *lst.rbegin() << endl;

    return 0;
}
