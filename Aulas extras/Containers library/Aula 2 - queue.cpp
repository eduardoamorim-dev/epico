#include <iostream>
#include <queue> 

using namespace std;

int main() {
    
    /*
    ======== conceito teórico =========
    
    Na fila o primeiro elemento que entro é o primeiro elemento que sai
    o ultimo elemento que entra é o ultimo que sai
    
    
     ======== metodos =========
     
     push.()
     pop.()
     emtpy.()  
     size.()
     front.() 
     back.() 
     
     
     ======== estrutura =========
    
    
    // queue<tipo da queue>nomeDaQueue */
    
    queue<string>cartas;
    

    // adicionar elementos em uma queue -  método .push();
    
    cartas.push("Rei de copas"); // primeiro elemento a entrar na fila - elemento do front
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de copas"); // ultimo elemento a entrar na fila - elemento do back
    
    
    
    // visualizar o elemento que esta na frente da fila - método .front()
    
    cout << "Elemento na frente da fila: " << cartas.front() << endl;
    
    // visualizar o elemento que esta na atrás da fila - método .front()
    
    cout << "Elemento atras da fila: " << cartas.back() << endl;
    
    
    
    // descobrir tamanho da fila - método .size();
    
    cout << "Tamanho da Fila " << cartas.size() << endl;
    
    
    
    // retirar elementos da fila - método .pop(); 
    
    cartas.pop(); 
    
    
    // verificar se a fila esta vazia - método .empty()
    
    if(cartas.empty()){
        cout << "Fila vazia" << endl;
    } else {
        cout << "A Fila possui " << cartas.size() << " elementos";
    }
    
    // deletar todos os elementos de uma fila - método .empty()
    
    while(!cartas.empty()){
        cartas.pop();
    }
    
    
    return 0;
}
