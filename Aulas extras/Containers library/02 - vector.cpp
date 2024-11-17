#include <iostream>
#include <vector> 

using namespace std;

int main() {
    
    /*
    ======== conceito teórico =========
    
    O vetor é uma estrutura de dados que armazena elementos de forma sequencial. 
    Ele possui capacidade dinâmica, ou seja, pode crescer e diminuir conforme necessário. 
    A diferença principal entre o vetor e a fila é que, no vetor, os elementos podem ser acessados diretamente por seu índice, enquanto na fila, o acesso segue a ordem de inserção (FIFO).
    
     ======== métodos =========
     
     push_back(). 
     pop_back().
     size().
     empty().
     at().
     front().
     back().
     clear().
     
     ======== estrutura =========
    
    // vector<tipo do vetor> nomeDoVetor */
    
    vector<string> cartas;
    

    // adicionar elementos no vetor - método .push_back();
    
    cartas.push_back("Rei de copas"); // Adiciona "Rei de copas" no final do vetor
    cartas.push_back("Rei de espadas");
    cartas.push_back("Rei de ouro");
    cartas.push_back("Rei de paus"); // Adiciona "Rei de paus" no final do vetor
    
    
    // visualizar o primeiro elemento do vetor - método .front()
    
    cout << "Primeiro elemento do vetor: " << cartas.front() << endl;
    
    // visualizar o último elemento do vetor - método .back()
    
    cout << "Último elemento do vetor: " << cartas.back() << endl;
    
    // acessar elemento por índice - método .at()
    
    cout << "Elemento no índice 2: " << cartas.at(2) << endl;
    
    // descobrir tamanho do vetor - método .size()
    
    cout << "Tamanho do vetor: " << cartas.size() << endl;
    
    // retirar o último elemento do vetor - método .pop_back();
    
    cartas.pop_back();
    
    // verificar se o vetor está vazio - método .empty()
    
    if(cartas.empty()){
        cout << "Vetor vazio" << endl;
    } else {
        cout << "O vetor possui " << cartas.size() << " elementos." << endl;
    }
    
    // limpar todos os elementos do vetor - método .clear()
    
    cartas.clear();
    
    // verificar se o vetor está vazio após limpar - método .empty()
    
    if(cartas.empty()){
        cout << "Vetor vazio após o clear" << endl;
    }
    
    return 0;
}
