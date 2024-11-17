#include <iostream>
#include <list>

using namespace std;

int main() {

    /*
    ======== conceito teórico =========
    
    A lista (list) é uma estrutura de dados duplamente encadeada, o que permite inserir e remover elementos tanto no início quanto no final da lista. Ela permite também inserções em qualquer posição específica.
    
    ======== métodos =========
    
    push_back().
    push_front().
    pop_back().
    pop_front().
    size().
    empty().
    front().
    back().
    insert().
    erase().
    clear().
    splice().
    remove().
    unique().
    
    ======== estrutura =========
    
    // list<tipo do elemento> nomeDaLista */
    
    list<int> lst;

    // adicionar elementos no final da lista - método .push_back();
    lst.push_back(10); // Adiciona no final
    lst.push_back(20);
    lst.push_back(30);

    // adicionar elementos no início da lista - método .push_front();
    lst.push_front(5);  // Adiciona no início

    // exibir os elementos usando front e back
    cout << "Primeiro elemento: " << lst.front() << endl; // 5
    cout << "Último elemento: " << lst.back() << endl;   // 30

    // tamanho da lista - método .size();
    cout << "Tamanho da lista: " << lst.size() << endl;   // 4
    
    // remover o último elemento - método .pop_back();
    lst.pop_back();
    cout << "Último elemento após pop_back(): " << lst.back() << endl;  // 20

    // remover o primeiro elemento - método .pop_front();
    lst.pop_front();
    cout << "Primeiro elemento após pop_front(): " << lst.front() << endl;  // 10

    // verificar se a lista está vazia - método .empty()
    if (lst.empty()) {
        cout << "A lista está vazia." << endl;
    } else {
        cout << "A lista não está vazia." << endl;
    }

    // adicionar um elemento em uma posição específica - método .insert();
    auto it = lst.begin();  // Obtém o iterador para o primeiro elemento
    lst.insert(it, 15);  // Adiciona 15 antes do primeiro elemento (10)

    // remover um elemento em uma posição específica - método .erase();
    it = lst.begin();
    lst.erase(it);  // Remove o primeiro elemento (15)

    // limpar todos os elementos da lista - método .clear();
    lst.clear();  // Remove todos os elementos

    cout << "Tamanho da lista após .clear(): " << lst.size() << endl;  // 0

    // Recriar a lista e adicionar elementos novamente
    lst.push_back(40);
    lst.push_back(50);
    lst.push_back(40);

    // remover todas as ocorrências de um valor - método .remove();
    lst.remove(40);  // Remove todas as ocorrências de 40
    cout << "Tamanho da lista após remove(40): " << lst.size() << endl;  // 1 (apenas o 50)

    // adicionar elementos novamente
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(10);

    // remover duplicatas consecutivas - método .unique();
    lst.unique();  // Remove duplicatas consecutivas
    cout << "Tamanho da lista após unique(): " << lst.size() << endl;  // 3 (10, 20, 50)

    // adicionar mais elementos para o exemplo de splice
    list<int> lst2;
    lst2.push_back(100);
    lst2.push_back(200);
    lst2.push_back(300);

    // fundir as duas listas - método .splice();
    lst.splice(lst.end(), lst2);  // Adiciona todos os elementos de lst2 ao final de lst

    // exibir os elementos da lista final
    cout << "Elementos da lista após splice():" << endl;
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
