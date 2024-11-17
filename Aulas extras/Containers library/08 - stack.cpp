#include <iostream>
#include <stack> 


/*

    ======== conceito teórico =========
    
    Uma pilha é uma estrutura de dados linear que segue o princípio LIFO (Last In, First Out), 
    que significa "Último a Entrar, Primeiro a Sair". 
    
    Isso quer dizer que o último elemento inserido na pilha é o primeiro a ser removido. 
    
    
     ======== metodos =========
     
     push.()   ->  adiciona um elemento ao topo
     pop.()    ->  remove o elemento do topo
     top.()    ->  Retorna o elemento no topo da pilha, sem removê-lo.
     emtpy.()  ->  Verifica se a estrutura está vazia, ou seja, se não contém nenhum elemento.
     size.()   ->  Retorna o número de elementos armazenados na estrutura.

     
     
     ======== estrutura =========
    
    
    stack<tipo da stack>nomeDaStack;
    
    */


using namespace std;

int main() {


    // ======== Criando uma pilha de strings chamada 'cartas'

    stack<string> cartas;

    // ======== Adicionando elementos à pilha usando o método .push()

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de copas"); // último elemento a entrar na pilha - elemento do topo

    // ======== acessar o elemento do topo da pilha 
    
    //  cout << "Elemento do topo: " << cartas.top() << endl;


    // ======== Exibindo o tamanho da pilha usando o método .size()

    // cout << "Tamanho da pilha: " << cartas.size() << endl;

    // ======== Retirando um elemento da pilha usando o método .pop()

    // cartas.pop(); 
    // cout << "Elemento do topo: " << cartas.top() << endl;

    // ======== Criando uma cópia da pilha para visualização
  
    // stack<string> temp(cartas); 

    // ======== Exibindo todos os elementos da pilha temporária 'temp'

    // cout << "Elementos da pilha:" << endl;
    // while (!temp.empty()) {
    //     cout << temp.top() << endl;
    //     temp.pop();
    // }

    // ======== Exibindo elementos restantes na pilha original 'cartas'

    // cout << endl << "Elementos restantes na pilha original:" << endl;
    // while (!cartas.empty()) {
    //     cout << cartas.top() << endl;
    //     cartas.pop();
    // }

    // ======== Verificando se a pilha está vazia usando o método .empty()
    
    // if(cartas.empty()){
    //     cout << "A pilha está vazia" << endl;
    // } else {
    //     cout << "A pilha possui " << cartas.size() << " elementos" << endl;
    // }

    // ======== Deletando todos os elementos da pilha 
    
    // while(!cartas.empty()){
    //     cartas.pop();
    // }

    return 0;
}
