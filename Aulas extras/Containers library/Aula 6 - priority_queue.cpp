#include <iostream>
#include <queue>

using namespace std;

int main() {
    
    /*
    ======== conceito teórico =========
    
    A fila de prioridade é uma estrutura de dados que sempre remove o elemento de maior prioridade (geralmente o maior valor) primeiro.
    
    ======== métodos =========
    
    push().
    pop().
    top().
    size().
    empty().
    
    ======== estrutura =========
    
    // priority_queue<tipo da fila de prioridade> nomeDaFila */
    
    priority_queue<int> pq;
    
    // adicionar elementos na fila de prioridade - método .push();
    
    pq.push(10);
    pq.push(30);
    pq.push(20);
    
    // visualizar o topo da fila de prioridade - método .top()
    
    cout << "Topo da fila de prioridade: " << pq.top() << endl;
    
    // remover o topo da fila - método .pop();
    
    pq.pop();
    
    // exibir o novo topo da fila de prioridade
    
    cout << "Novo topo da fila de prioridade: " << pq.top() << endl;
    
    return 0;
}
