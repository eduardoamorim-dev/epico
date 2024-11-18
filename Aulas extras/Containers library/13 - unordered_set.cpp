#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    /*
    ========================================
    ======= CONCEITO TEÓRICO DO UNORDERED_SET =======
    ========================================
    
    O std::unordered_set é um container associativo que:
    - Armazena elementos únicos
    - Não mantém ordem específica dos elementos
    - Implementado como tabela hash
    - Acesso, inserção e remoção com complexidade média O(1)
    - Não permite elementos duplicados
    - Elementos não podem ser modificados (são const)
    
    =========================================
    ======= MÉTODOS DISPONÍVEIS NO UNORDERED_SET =======
    =========================================
    
    Construtores:
    - unordered_set<T>: Construtor padrão
    - unordered_set<T>(first, last): Range
    - unordered_set<T>(init_list): Lista de inicialização
    
    Iteradores:
    - begin(), end()
    - cbegin(), cend()
    
    Capacidade:
    - empty(): Verifica se vazio
    - size(): Número de elementos
    - max_size(): Tamanho máximo
    
    Modificadores:
    - insert(): Insere elementos
    - emplace(): Constrói in-place
    - erase(): Remove elementos
    - clear(): Remove todos
    
    Busca:
    - find(): Busca elemento
    - count(): Conta ocorrências
    - contains(): Verifica existência (C++20)
    
    Bucket Interface:
    - bucket_count(): Número de buckets
    - max_bucket_count(): Máximo de buckets
    - bucket_size(): Tamanho do bucket
    - bucket(): Bucket de um elemento
    
    Hash Policy:
    - load_factor(): Fator de carga atual
    - max_load_factor(): Fator de carga máximo
    - rehash(): Estabelece número de buckets
    - reserve(): Reserva espaço
    */
    
    // ================================================
    // Criação e Operações Básicas
    // ================================================
    unordered_set<string> palavras;
    
    cout << "1. OPERAÇÕES DE INSERÇÃO:" << endl;
    
    // insert
    palavras.insert("primeiro");
    palavras.insert("segundo");
    auto res = palavras.insert("terceiro");
    cout << "- Inserido 'terceiro'? " << (res.second ? "Sim" : "Não") << endl;
    
    // emplace
    auto res2 = palavras.emplace("quarto");
    cout << "- Inserido 'quarto'? " << (res2.second ? "Sim" : "Não") << endl;
    
    // Tentativa de inserir duplicata
    res = palavras.insert("primeiro");
    cout << "- Tentativa de inserir duplicata 'primeiro': " 
         << (res.second ? "Sucesso" : "Falha") << endl;
    
    // ================================================
    // Acesso e Busca
    // ================================================
    cout << "\n2. OPERAÇÕES DE BUSCA:" << endl;
    
    // find
    auto it = palavras.find("segundo");
    if(it != palavras.end()) {
        cout << "- Elemento 'segundo' encontrado" << endl;
    }
    
    // count
    cout << "- Contagem de 'terceiro': " << palavras.count("terceiro") << endl;
    
    #if defined(__cplusplus) && __cplusplus >= 202002L
    // contains (C++20)
    cout << "- Contains 'quarto'? " 
         << (palavras.contains("quarto") ? "Sim" : "Não") << endl;
    #endif
    
    // ================================================
    // Informações de Hash
    // ================================================
    cout << "\n3. INFORMAÇÕES DE HASH:" << endl;
    cout << "- Número de buckets: " << palavras.bucket_count() << endl;
    cout << "- Load factor atual: " << palavras.load_factor() << endl;
    cout << "- Load factor máximo: " << palavras.max_load_factor() << endl;
    
    // Demonstração de bucket
    string palavra = "primeiro";
    cout << "- 'primeiro' está no bucket: " << palavras.bucket(palavra) << endl;
    
    // ================================================
    // Iteração
    // ================================================
    cout << "\n4. ITERAÇÃO PELOS ELEMENTOS:" << endl;
    cout << "- Elementos: ";
    for(const auto& elem : palavras) {
        cout << elem << " ";
    }
    cout << endl;
    
    // Iteração por buckets
    cout << "- Elementos por bucket:" << endl;
    for(size_t i = 0; i < palavras.bucket_count(); ++i) {
        cout << "Bucket " << i << " tem " 
             << palavras.bucket_size(i) << " elementos" << endl;
    }
    
    // ================================================
    // Modificadores
    // ================================================
    cout << "\n5. OPERAÇÕES DE MODIFICAÇÃO:" << endl;
    
    // reserve
    palavras.reserve(10);
    cout << "- Buckets após reserve(10): " << palavras.bucket_count() << endl;
    
    // rehash
    palavras.rehash(15);
    cout << "- Buckets após rehash(15): " << palavras.bucket_count() << endl;
    
    // erase
    size_t removed = palavras.erase("primeiro");
    cout << "- Elementos removidos ao apagar 'primeiro': " << removed << endl;
    
    // clear
    palavras.clear();
    cout << "- Tamanho após clear(): " << palavras.size() << endl;
    
    // ================================================
    // Operações com Hash Personalizado
    // ================================================
    cout << "\n6. DEMONSTRAÇÃO DE HASH PERSONALIZADO:" << endl;
    
    struct CustomHash {
        size_t operator()(const string& s) const {
            return hash<string>{}(s) ^ (hash<size_t>{}(s.length()) << 1);
        }
    };
    
    unordered_set<string, CustomHash> palavras_custom;
    palavras_custom.insert("teste");
    cout << "- Set com hash personalizado criado e testado" << endl;

    return 0;
}
