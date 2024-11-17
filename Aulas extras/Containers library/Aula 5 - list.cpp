#include <iostream>
#include <list>

using namespace std;

int main() {
    
    /*
    ======== conceito teórico =========
    
    A lista é uma estrutura de dados duplamente encadeada que permite inserção e remoção de elementos em qualquer posição da lista.
    
    ======== métodos =========
    
    push_back().
    push_front().
    pop_back().
    pop_front().
    size().
    empty().
    front().
    back().
    
    ======== estrutura =========
    
    // list<tipo da lista> nomeDaLista */
    
    list<int> lst;
    
    // adicionar elementos no início e no final - métodos .push_back() e .push_front();
    
    lst.push_back(10);
    lst.push_front(20);
    
    // visualizar o primeiro e o último elemento - métodos .front() e .back()
    
    cout << "Primeiro elemento: " << lst.front() << endl;
    cout << "Último elemento: " << lst.back() << endl;
    
    // remover o primeiro e o último elemento - métodos .pop_back() e .pop_front();
    
    lst.pop_back();
    lst.pop_front();
    
    // verificar se a lista está vazia - método .empty()
    
    if(lst.empty()) {
        cout << "Lista vazia." << endl;
    } else {
        cout << "A lista possui " << lst.size() << " elementos." << endl;
    }
    
    return 0;
}
