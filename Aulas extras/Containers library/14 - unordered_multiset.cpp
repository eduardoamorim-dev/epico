#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    /*
    =================================================
    ======= CONCEITO TEÓRICO DO UNORDERED_MULTISET =======
    =================================================
    
    O std::unordered_multiset é um container associativo que:
    - Armazena múltiplas cópias de elementos (permite duplicatas).
    - Não mantém ordem específica dos elementos.
    - Implementado como tabela hash.
    - Acesso, inserção e remoção com complexidade média O(1).
    - Elementos não podem ser modificados (são const).

    =================================================
    ======= MÉTODOS DISPONÍVEIS NO UNORDERED_MULTISET =======
    =================================================
    
    Construtores:
    - unordered_multiset<T>: Construtor padrão.
    - unordered_multiset<T>(first, last): Range.
    - unordered_multiset<T>(init_list): Lista de inicialização.
    
    Iteradores:
    - begin(), end(), cbegin(), cend().
    
    Capacidade:
    - empty(), size(), max_size().
    
    Modificadores:
    - insert(), emplace(), erase(), clear().
    
    Busca:
    - find(), count(), equal_range().
    
    Bucket Interface:
    - bucket_count(), max_bucket_count(), bucket_size(), bucket().
    
    Hash Policy:
    - load_factor(), max_load_factor(), rehash(), reserve().
    */

    // ================================================
    // Criação e Operações Básicas
    // ================================================
    unordered_multiset<string> frutas;
    cout << "1. OPERAÇÕES DE INSERÇÃO:" << endl;

    // insert
    frutas.insert("maçã");
    frutas.insert("banana");
    frutas.insert("maçã");
    frutas.insert("laranja");

    // Iteração e exibição
    cout << "- Elementos do multiset: ";
    for (const auto& fruta : frutas) {
        cout << fruta << " ";
    }
    cout << endl;

    // count
    cout << "- Quantidade de 'maçã': " << frutas.count("maçã") << endl;

    // find
    auto it = frutas.find("banana");
    if (it != frutas.end()) {
        cout << "- 'banana' encontrada!" << endl;
    }

    // erase
    frutas.erase("maçã");
    cout << "- Elementos após remover uma 'maçã': ";
    for (const auto& fruta : frutas) {
        cout << fruta << " ";
    }
    cout << endl;

    // clear
    frutas.clear();
    cout << "- Tamanho após clear(): " << frutas.size() << endl;

    return 0;
}
