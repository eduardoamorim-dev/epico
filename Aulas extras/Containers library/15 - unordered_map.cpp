#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    /*
    ================================================
    ======= CONCEITO TEÓRICO DO UNORDERED_MAP =======
    ================================================
    
    O std::unordered_map é um container associativo que:
    - Armazena pares chave-valor.
    - Não permite chaves duplicadas.
    - Implementado como tabela hash.
    - Acesso, inserção e remoção com complexidade média O(1).
    */

    // ================================================
    // Criação e Operações Básicas
    // ================================================
    unordered_map<int, string> estudantes;
    cout << "1. OPERAÇÕES DE INSERÇÃO:" << endl;

    // insert
    estudantes.insert({1, "Alice"});
    estudantes.insert({2, "Bob"});
    estudantes[3] = "Charlie";

    // Iteração e exibição
    for (const auto& [id, nome] : estudantes) {
        cout << "- ID: " << id << ", Nome: " << nome << endl;
    }

    // Acesso via chave
    cout << "- Nome com ID 2: " << estudantes[2] << endl;

    // find
    auto it = estudantes.find(3);
    if (it != estudantes.end()) {
        cout << "- Estudante com ID 3: " << it->second << endl;
    }

    // erase
    estudantes.erase(1);
    cout << "- Elementos após remover ID 1: ";
    for (const auto& [id, nome] : estudantes) {
        cout << id << " ";
    }
    cout << endl;

    // clear
    estudantes.clear();
    cout << "- Tamanho após clear(): " << estudantes.size() << endl;

    return 0;
}
