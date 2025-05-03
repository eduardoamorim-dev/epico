#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis sem valores iniciais
    int idade;              // Variável inteira
    float altura;           // Variável decimal
    char letra;             // Variável caractere
    string nome;            // Variável texto
    bool ligado;            // Variável booleana (verdadeiro/falso)
    
    // Atribuindo valores às variáveis
    idade = 30;
    altura = 1.80;
    letra = 'A';
    nome = "Carlos";
    ligado = false;
    
    // Exibindo os valores
    cout << "=== Valores Iniciais ===" << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "Letra: " << letra << endl;
    cout << "Nome: " << nome << endl;
    cout << "ligado: " << ligado << endl;
    
    // Diferentes formas de entrada de dados
    cout << "\n=== Entrada de Dados ===" << endl;
    
    // Entrada de inteiro
    cout << "Digite sua idade: ";
    cin >> idade;
    
    // Entrada de float
    cout << "Digite sua altura: ";
    cin >> altura;
    
    // Entrada de char
    cout << "Digite uma letra: ";
    cin >> letra;
    
    // Entrada de bool (0 para false, 1 para true)
    cout << "Você é ligado? (0=não, 1=sim): ";
    cin >> ligado;
    
    // Limpando o buffer para entrada de string
    cin.ignore();
    
    // Entrada de string (uma palavra)
    cout << "Digite seu primeiro nome: ";
    cin >> nome;
    
    // Limpando o buffer novamente
    cin.ignore();
    
    // Entrada de string com espaços (nome completo)
    string nomeCompleto;
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);
    
    // Exibindo os novos valores
    cout << "\n=== Valores Digitados ===" << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "Letra: " << letra << endl;
    cout << "Nome: " << nome << endl;
    cout << "Nome Completo: " << nomeCompleto << endl;
    cout << "ligado: " << ligado << endl;
    
    return 0;
}

// https://2linguagensprogsi.webnode.page/linguagens/linguagem-c-with-classes/tipos-de-dados-de-c-/
