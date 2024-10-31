#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int idade;
    int dia_da_semana;

    // Entrada para idade
    cout << "Digite sua idade: ";
    cin >> idade;

    // Exemplo de IF: Verifica se a idade é maior ou igual a 18
    if (idade >= 18) { 
        cout << "Você é maior de idade." << endl;
    }

    // Exemplo de IF-ELSE: Define uma resposta caso a idade seja menor de 18
    if (idade >= 18) {
        cout << "Você é maior de idade." << endl;
    } else {
        cout << "Você é menor de idade." << endl;
    }

    // Exemplo de ELSE IF: Verifica múltiplas condições para diferentes faixas etárias
    if (idade < 18) {
        cout << "Você é menor de idade." << endl;
    } else if (idade >= 18 && idade < 65) {
        cout << "Você é adulto." << endl;
    } else {
        cout << "Você é idoso." << endl;
    }

    // Entrada para o dia da semana (1 a 7, onde 1 = Segunda e 7 = Domingo)
    cout << "Digite o número do dia da semana (1 para segunda-feira até 7 para domingo): ";
    cin >> dia_da_semana;

    // Exemplo de SWITCH: Mapeia cada número a um dia da semana específico
    switch (dia_da_semana) {
        case 1:
            cout << "Hoje é Segunda-feira." << endl;
            break;
        case 2:
            cout << "Hoje é Terça-feira." << endl;
            break;
        case 3:
            cout << "Hoje é Quarta-feira." << endl;
            break;
        case 4:
            cout << "Hoje é Quinta-feira." << endl;
            break;
        case 5:
            cout << "Hoje é Sexta-feira." << endl;
            break;
        case 6:
            cout << "Hoje é Sábado." << endl;
            break;
        case 7:
            cout << "Hoje é Domingo." << endl;
            break;
        default:
            cout << "Número inválido! Digite um valor entre 1 e 7." << endl;
    }

    // Exemplo de Operador Ternário: Avalia se a idade é maior ou igual a 18 para definir a categoria
    string status_maioridade = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    cout << "Status de maioridade: " << status_maioridade << endl;

    return 0;
}
