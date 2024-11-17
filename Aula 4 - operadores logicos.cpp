#include <iostream>

using namespace std;

int main() {
    // =================== TEORIA ===================
    // Operadores lógicos em C++:
    //
    // 1. AND lógico (&&): Retorna verdadeiro (true) se ambos os operandos forem verdadeiros.
    //    Exemplo: Usado para verificar múltiplas condições simultaneamente.
    //
    // 2. OR lógico (||): Retorna verdadeiro (true) se pelo menos um dos operandos for verdadeiro.
    //    Exemplo: Usado para verificar se pelo menos uma condição é verdadeira.
    //
    // 3. NOT lógico (!): Inverte o valor lógico de um operando.
    //    Exemplo: Usado para negar uma condição.
    //
    // =================================================

    // === Exemplo 1: AND lógico (&&) ===
    cout << "=== Exemplo Prático de AND Lógico (&&) ===" << endl;
    int idade = 20;
    bool possuiCNH = true;

    if (idade >= 18 && possuiCNH) {
        cout << "Você está apto a dirigir!" << endl;
    } else {
        cout << "Você não pode dirigir." << endl;
    }

    // === Exemplo 2: OR lógico (||) ===
    cout << "\n=== Exemplo Prático de OR Lógico (||) ===" << endl;
    bool temCarteiraDeEstudante = false;
    bool temDocumentoDeIdentidade = true;

    if (temCarteiraDeEstudante || temDocumentoDeIdentidade) {
        cout << "Você pode entrar na biblioteca." << endl;
    } else {
        cout << "Você precisa de um documento para entrar." << endl;
    }

    // === Exemplo 3: NOT lógico (!) ===
    cout << "\n=== Exemplo Prático de NOT Lógico (!) ===" << endl;
    bool estaChovendo = false;

    if (!estaChovendo) {
        cout << "Você pode sair para caminhar." << endl;
    } else {
        cout << "Leve um guarda-chuva se for sair." << endl;
    }

    return 0;
}
