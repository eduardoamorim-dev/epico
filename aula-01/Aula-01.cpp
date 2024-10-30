// Importação das bibliotecas padrão
#include <iostream>  // Biblioteca para operações de entrada e saída padrão (ex.: std::cout, std::cin)

// O namespace padrão (std) ajuda a evitar a necessidade de prefixar elementos como std::cout ou std::cin
using namespace std;

// Função principal do programa
int main() {
    // Declaração de uma variável do tipo inteiro
    int idade;

    // Saída de dados: exibe uma mensagem ao usuário
    cout << "Digite sua idade: ";
    
    // Entrada de dados: captura a idade digitada pelo usuário e armazena na variável `idade`
    cin >> idade;

    cout << idade << endl;  // Exibe o valor armazenado na variável idade


    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}

// Comentário sobre a estrutura e funcionamento:
// 1. `#include <iostream>` é a inclusão da biblioteca padrão para entrada e saída.
// 2. `using namespace std;` simplifica o uso de comandos como `std::cout`.
// 3. `int main()` é a função principal onde o programa começa a executar.
// 4. `cout` exibe mensagens no console e `cin` captura o que o usuário digita.
// 5. `if...else` realiza uma decisão com base no valor inserido pelo usuário.
// 6. `return 0;` indica o fim da execução.
