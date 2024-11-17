#include <iostream>
#include <string> // Necessário para o uso de `string`

using namespace std;

int main() {
    // Declaração das variáveis
    int idade;                  // Número inteiro padrão
    short int ano_curto;        // Número inteiro menor
    long int populacao_cidade;  // Número inteiro maior
    long long int populacao_mundo; // Número inteiro muito grande

    float altura;               // Número decimal com precisão simples
    double preco;               // Número decimal com precisão dupla
    long double distancia;      // Número decimal com precisão maior

    char inicial;               // Um único caractere

    bool maior_de_idade;        // Valor lógico, true ou false

    string nome;                // Uma sequência de caracteres (texto)

    // Constante
    const double PI = 3.14159;  // Constante que não pode ser alterada

    // Solicitando e recebendo valores do usuário
    cout << "Digite seu nome: ";
    getline(cin, nome); // `getline` permite ler uma linha inteira, incluindo espaços

    cout << "Digite sua idade: ";
    cin >> idade; // Lê um valor inteiro

    cout << "Digite o ano atual (short int): ";
    cin >> ano_curto; // Lê um valor de tipo `short int`

    cout << "Digite a população estimada da sua cidade: ";
    cin >> populacao_cidade; // Lê um valor de tipo `long int`

    cout << "Digite a população mundial estimada: ";
    cin >> populacao_mundo; // Lê um valor de tipo `long long int`

    cout << "Digite sua altura em metros (exemplo 1.75): ";
    cin >> altura; // Lê um valor de ponto flutuante (float)

    cout << "Digite o preço de um item (exemplo 1234.56): ";
    cin >> preco; // Lê um valor de ponto flutuante com precisão dupla (double)

    cout << "Digite a distância até seu destino em metros: ";
    cin >> distancia; // Lê um valor de ponto flutuante com precisão maior (long double)

    cout << "Digite a inicial do seu nome: ";
    cin >> inicial; // Lê um caractere

    cout << "Você é maior de idade? (1 para Sim, 0 para Não): ";
    cin >> maior_de_idade; // Lê um valor booleano (1 para true, 0 para false)

    // Exibindo os valores das variáveis
    cout << "\n--- Dados Recebidos ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Ano Curto: " << ano_curto << endl;
    cout << "População da Cidade: " << populacao_cidade << endl;
    cout << "População Mundial: " << populacao_mundo << endl;

    cout << "Altura: " << altura << " metros" << endl;
    cout << "Preço: " << preco << " reais" << endl;
    cout << "Distância: " << distancia << " metros" << endl;

    cout << "Inicial do Nome: " << inicial << endl;
    cout << "Maior de Idade: " << (maior_de_idade ? "Sim" : "Não") << endl;

    cout << "Valor de PI: " << PI << endl;

    return 0;
}

// https://2linguagensprogsi.webnode.page/linguagens/linguagem-c-with-classes/tipos-de-dados-de-c-/

