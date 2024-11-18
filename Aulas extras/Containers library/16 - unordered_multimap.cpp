#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    /*
    ===================================================
    ======= CONCEITO TEÓRICO DO UNORDERED_MULTIMAP =======
    ===================================================
    
    O std::unordered_multimap é um container associativo que:
    - Armazena pares chave-valor.
    - Permite múltiplos valores para a mesma chave.
    - Implementado como tabela hash.
    */

    // ================================================
    // Criação e Operações Básicas
    // ================================================
    unordered_multimap<int, string> produtos;
    cout << "1. OPERAÇÕES DE INSERÇÃO:" << endl;

    // insert
    produtos.insert({1, "Notebook"});
    produtos.insert({2, "Mouse"});
    produtos.insert({1, "Teclado"});

    // Iteração e exibição
    cout << "- Produtos:" << endl;
    for (const auto& [id, nome] : produtos) {
        cout << "  ID: " << id << ", Nome: " << nome << endl;
    }

    // equal_range
    auto range = produtos.equal_range(1);
    cout << "- Produtos com ID 1:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << "  " << it->second << endl;
    }

    // erase
    produtos.erase(1);
    cout << "- Elementos após remover ID 1: ";
    for (const auto& [id, nome] : produtos) {
        cout << id << " ";
    }
    cout << endl;

    // clear
    produtos.clear();
    cout << "- Tamanho após clear(): " << produtos.size() << endl;

    return 0;
}
