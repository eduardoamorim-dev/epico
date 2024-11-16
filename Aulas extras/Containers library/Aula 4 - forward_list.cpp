#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

int main() {
    /*
    ==============================================
    ======= CONCEITO TEÓRICO DO FORWARD_LIST =======
    ==============================================
    
    O `std::forward_list` é uma lista simplesmente encadeada que permite
    inserção e remoção eficiente apenas no início e após um elemento.
    
    Características:
    - Lista encadeada unidirecional
    - Menor overhead de memória que std::list
    - Não possui acesso reverso
    - Não mantém controle do tamanho
    - Ideal para inserções frequentes no início
    
    =============================================
    ======= MÉTODOS DO FORWARD_LIST =======
    =============================================
    
    Elementos:
    - push_front(): Adiciona no início
    - pop_front(): Remove do início
    - emplace_front(): Constrói no início
    - emplace_after(): Constrói após posição
    
    Acesso:
    - front(): Primeiro elemento
    - before_begin(): Iterator antes do início
    - begin(), end(): Iterators normal
    - cbegin(), cend(): Iterators constantes
    
    Modificadores:
    - insert_after(): Insere após posição
    - erase_after(): Remove após posição
    - clear(): Remove todos elementos
    - resize(): Altera o tamanho
    
    Operações:
    - splice_after(): Move elementos
    - remove(), remove_if(): Remove por valor/condição
    - unique(): Remove duplicados
    - merge(): Mescla duas listas
    - sort(): Ordena elementos
    - reverse(): Inverte ordem
    */
    
    // ================================================
    // Criação e Operações Básicas
    // ================================================
    forward_list<int> flist;
    
    // Inserções no início
    flist.push_front(30);  // [30]
    flist.push_front(20);  // [20, 30]
    flist.push_front(10);  // [10, 20, 30]
    
    cout << "Forward list após inserções: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Inserção após posição específica
    // ================================================
    auto it = flist.begin();
    flist.insert_after(it, 15);  // [10, 15, 20, 30]
    
    cout << "\nApós insert_after: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Emplace operations
    // ================================================
    flist.emplace_front(5);  // Constrói no início
    auto pos = flist.begin();
    flist.emplace_after(pos, 7);  // Constrói após primeira posição
    
    cout << "\nApós emplace operations: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Remoção de elementos
    // ================================================
    flist.pop_front();  // Remove primeiro elemento
    flist.erase_after(flist.begin());  // Remove segundo elemento
    
    cout << "\nApós remoções: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Operações específicas do forward_list
    // ================================================
    
    // Remove
    flist.push_front(15);
    flist.push_front(15);
    flist.remove(15);  // Remove todos elementos com valor 15
    
    cout << "\nApós remove(15): ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // Remove_if
    flist.remove_if([](int n) { return n > 25; });
    
    cout << "Após remove_if: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Splice operations
    // ================================================
    forward_list<int> flist2 = {100, 200, 300};
    
    cout << "\nAntes do splice_after:" << endl;
    cout << "flist1: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << "\nflist2: ";
    for (const auto& elem : flist2) cout << elem << " ";
    
    flist.splice_after(flist.before_begin(), flist2);
    
    cout << "\n\nDepois do splice_after:" << endl;
    cout << "flist1: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << "\nflist2 (vazia): ";
    for (const auto& elem : flist2) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Sort e Unique
    // ================================================
    flist.sort();  // Ordena a lista
    cout << "\nApós sort: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // Adiciona duplicados e remove
    flist.push_front(10);
    flist.push_front(10);
    flist.sort();
    flist.unique();  // Remove duplicados consecutivos
    
    cout << "Após unique: ";
    for (const auto& elem : flist) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Merge
    // ================================================
    forward_list<int> flist3 = {1, 3, 5};
    forward_list<int> flist4 = {2, 4, 6};
    
    flist3.merge(flist4);  // Mescla flist4 em flist3 (ambas devem estar ordenadas)
    
    cout << "\nApós merge: ";
    for (const auto& elem : flist3) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Reverse
    // ================================================
    flist3.reverse();
    cout << "Após reverse: ";
    for (const auto& elem : flist3) cout << elem << " ";
    cout << endl;
    
    // ================================================
    // Resize e Clear
    // ================================================
    flist3.resize(4, 100);  // Redimensiona para 4 elementos, preenchendo com 100
    cout << "\nApós resize: ";
    for (const auto& elem : flist3) cout << elem << " ";
    cout << endl;
    
    flist3.clear();  // Remove todos os elementos
    cout << "Lista vazia? " << (flist3.empty() ? "Sim" : "Não") << endl;
    
    return 0;
}
