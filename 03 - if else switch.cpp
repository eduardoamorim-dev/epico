#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaramos as variáveis que serão usadas para guardar a idade do usuário
    // e o número correspondente ao dia da semana.
    int idade, dia_da_semana;

    // Solicita ao usuário que insira a idade. O "cout" serve para exibir mensagens na tela.
    cout << "Digite sua idade: ";
    cin >> idade; // "cin" é usado para capturar a entrada do usuário e salvar na variável "idade".

    // Aqui usamos uma estrutura condicional "if-else" para verificar a faixa etária do usuário.
    if (idade < 18) {
        // Caso a idade seja menor que 18, o usuário é considerado menor de idade.
        cout << "Voce e menor de idade." << endl;
    } else if (idade < 65) {
        // Caso a idade esteja entre 18 e 64 (inclusive), o usuário é um adulto.
        cout << "Voce e adulto." << endl;
    } else {
        // Para idades de 65 ou mais, o usuário é considerado idoso.
        cout << "Voce e idoso." << endl;
    }

    // Agora pedimos ao usuário para digitar o número do dia da semana.
    cout << "Digite o numero do dia da semana (1 para segunda-feira ate 7 para domingo): ";
    cin >> dia_da_semana; // Capturamos a entrada e armazenamos na variável "dia_da_semana".

    // Usamos uma estrutura "switch" para associar o número a um dia da semana.
    // O "switch" verifica o valor da variável "dia_da_semana".
    switch (dia_da_semana) {
        case 1: // Se o valor for 1, é segunda-feira.
            cout << "Hoje e Segunda-feira." << endl;
            break; // O "break" interrompe a execução do "switch" para evitar que os próximos casos sejam executados.
        case 2:
            cout << "Hoje e Terca-feira." << endl;
            break;
        case 3:
            cout << "Hoje e Quarta-feira." << endl;
            break;
        case 4:
            cout << "Hoje e Quinta-feira." << endl;
            break;
        case 5:
            cout << "Hoje e Sexta-feira." << endl;
            break;
        case 6:
            cout << "Hoje e Sabado." << endl;
            break;
        case 7:
            cout << "Hoje e Domingo." << endl;
            break;
        default:
            // Se o número não estiver entre 1 e 7, informamos que o valor é inválido.
            cout << "Numero invalido! Digite um valor entre 1 e 7." << endl;
    }

    // Por fim, usamos o operador ternário para verificar se o usuário é maior ou menor de idade.
    // A expressão "(idade >= 18)" verifica se a idade é maior ou igual a 18.
    // Se for verdadeira, "Maior de idade" será armazenado em "status". Caso contrário, "Menor de idade" será armazenado.
    string status = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    // Exibimos o status final do usuário (maior ou menor de idade).
    cout << "Status: " << status << endl;

    // Finalizamos o programa retornando 0, o que indica que tudo foi executado corretamente.
    return 0;
}
