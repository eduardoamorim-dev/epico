#include <iostream>
#include <deque>

using namespace std;

int main() {
    
    /*
    ======== conceito teórico =========
    
    O deque (double-ended queue) é uma estrutura de dados que permite a inserção e remoção de elementos tanto no início quanto no final.
    
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
    
    // deque<tipo do deque> nomeDoDeque */
    
    deque<int> dq;
    
    // adicionar elementos no início e no final - métodos .push_back() e .push_front();
    
    dq.push_back(10);
    dq.push_front(20);
    
    // visualizar o primeiro e o último elemento - métodos .front() e .back()
    
    cout << "Primeiro elemento: " << dq.front() << endl;
    cout << "Último elemento: " << dq.back() << endl;
    
    // remover o primeiro e o último elemento - métodos .pop_back() e .pop_front();
    
    dq.pop_back();
    dq.pop_front();
    
    // verificar se o deque está vazio - método .empty()
    
    if(dq.empty()) {
        cout << "Deque vazio." << endl;
    } else {
        cout << "O deque possui " << dq.size() << " elementos." << endl;
    }
    
    return 0;
}
