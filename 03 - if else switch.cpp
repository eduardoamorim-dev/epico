#include <iostream>
#include <string>

using namespace std;

int main() {
    int idade, dia_da_semana;

    // Entrada para idade
    cout << "Digite sua idade: ";
    cin >> idade;

    // Verifica a faixa etaria
    if (idade < 18) {
        cout << "Voce e menor de idade." << endl;
    } else if (idade < 65) {
        cout << "Voce e adulto." << endl;
    } else {
        cout << "Voce e idoso." << endl;
    }

    // Entrada para o dia da semana (1 a 7)
    cout << "Digite o numero do dia da semana (1 para segunda-feira ate 7 para domingo): ";
    cin >> dia_da_semana;

    // Mapeia cada numero a um dia da semana
    switch (dia_da_semana) {
        case 1: cout << "Hoje e Segunda-feira." << endl; break;
        case 2: cout << "Hoje e Terca-feira." << endl; break;
        case 3: cout << "Hoje e Quarta-feira." << endl; break;
        case 4: cout << "Hoje e Quinta-feira." << endl; break;
        case 5: cout << "Hoje e Sexta-feira." << endl; break;
        case 6: cout << "Hoje e Sabado." << endl; break;
        case 7: cout << "Hoje e Domingo." << endl; break;
        default: cout << "Numero invalido! Digite um valor entre 1 e 7." << endl;
    }

    // Operador ternario para maioridade
    string status = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    cout << "Status: " << status << endl;

    return 0;
}
