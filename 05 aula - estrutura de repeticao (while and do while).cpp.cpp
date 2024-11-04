#include <iostream>

using namespace std;

int main() {
    
    int numero; // Variável para armazenar o número digitado
    int soma = 0; // Inicializa a soma como 0

    cout << "Digite números para somar (0 para sair): ";
    cin >> numero; // Lê o primeiro número

    // Enquanto o número não for 0, continua somando
    while (numero != 0) {
        soma += numero; // Adiciona o número à soma
        cout << "Digite outro número (0 para sair): ";
        cin >> numero; // Lê o próximo número
    }

    cout << "A soma total é: " << soma << endl; // Exibe a soma final
    
    // ---
    
    
    int i = 10; // Inicializa i com 10

    // Loop para contar regressivamente até 1
    while (i >= 1) {
        cout << "Contagem regressiva: " << i << endl; // Exibe o número atual
        i--; // Decrementa i em 1
    }

    cout << "Fim da contagem!" << endl; // Mensagem final
    
    // ---
    
    int numero; // Variável para armazenar o número digitado
    int maior = 0; // Inicializa o maior número como 0

    cout << "Digite números (0 para sair): ";
    cin >> numero; // Lê o primeiro número

    // Enquanto o número não for 0, continua verificando o maior
    while (numero != 0) {
        if (numero > maior) { // Se o número digitado for maior que o atual maior
            maior = numero; // Atualiza o maior
        }
        cout << "Digite outro número (0 para sair): ";
        cin >> numero; // Lê o próximo número
    }

    cout << "O maior número digitado foi: " << maior << endl; // Exibe o maior número


    // =================================================================

    int opcao; // Variável para armazenar a opção do menu

    do {
        // Exibe as opções do menu
        cout << "Menu de Opções:" << endl;
        cout << "1. Opção 1" << endl;
        cout << "2. Opção 2" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao; // Lê a opção escolhida

        // Executa a ação correspondente à opção escolhida
        switch (opcao) {
            case 1:
                cout << "Você escolheu a Opção 1." << endl;
                break;
            case 2:
                cout << "Você escolheu a Opção 2." << endl;
                break;
            case 3:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
                break;
        }
    } while (opcao != 3); // Continua até que a opção escolhida seja 3 (sair)
    
    // -- 
    
    

    int numero; // Variável para armazenar o número digitado

    // Solicita que o usuário digite um número positivo
    do {
        cout << "Digite um número positivo: ";
        cin >> numero; // Lê o número digitado
        if (numero < 0) {
            cout << "Número inválido! Tente novamente." << endl; // Mensagem de erro
        }
    } while (numero < 0); // Continua até que um número positivo seja digitado

    cout << "Você digitou: " << numero << endl; // Exibe o número válido


    // =================================================================

    return 0;
}


/*

Quando usar do while:

Use a estrutura do while quando você deseja garantir que o bloco de código seja executado pelo menos uma vez, independentemente da condição.
É útil em situações onde a primeira execução deve ocorrer antes da verificação da condição. 

--

Quando usar while:

Use a estrutura while quando a quantidade de iterações não for conhecida de antemão e depende de uma condição a ser satisfeita.
É ideal quando você precisa verificar a condição antes de executar o bloco de código.

*/

