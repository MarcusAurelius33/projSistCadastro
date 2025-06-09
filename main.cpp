#include <iostream> 
#include <memory> // Inclui a biblioteca memory para usar unique_ptr
#include <limits> // Inclui a biblioteca limits para usar numeric_limits
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
#include "desenvolvedor.h" // Inclui o arquivo de cabeçalho da classe Desenvolvedor
#include "gerente.h" // Inclui o arquivo de cabeçalho da classe Gerente
#include "estagiario.h" // Inclui o arquivo de cabeçalho da classe Estagiario

using namespace std; 

// Função para ler um número inteiro do usuário, com validação de entrada
int lerInteiro(const string& mensagem) {
    int valor;
    while (true) {
        cout << mensagem;
        if (cin >> valor) {
            break; // Sai do loop se a entrada for um inteiro válido
        } else {
            cout << "Entrada inválida. Digite um número inteiro.\n";
            cin.clear(); // Limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inválida
        }
    }
    return valor;
}

// Função para ler um número float do usuário, com validação de entrada
float lerFloat(const string& mensagem) {
    float valor;
    while (true) {
        cout << mensagem;
        if (cin >> valor) {
            break; // Sai do loop se a entrada for um float válido
        } else {
            cout << "Entrada inválida. Digite um número real.\n";
            cin.clear(); // Limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inválida
        }
    }
    return valor;
}

int main() {
    unique_ptr<FUNCIONARIO> funcionarios[10]; // Array de ponteiros inteligentes unique_ptr para armazenar os funcionários. Tamanho máximo: 10
    int numFuncionarios = 0; // Variável para armazenar o número de funcionários

    cout << "Quantos funcionarios deseja cadastrar (pelo menos 6)? ";
    cin >> numFuncionarios;

     while (numFuncionarios < 6 || numFuncionarios > 10 ) { // Loop que garante que o número de funcionários esteja entre 6 e 10
            cout << "Número minimo: 6, e maximo: 10. Insira a quantidade: " ;
            cin >> numFuncionarios;
     }

    for (int i = 0; i < numFuncionarios; ++i) { // Loop para cadastrar cada funcionário
        int tipo;
        string nome;
        float salarioBase;
        int id;

        cout << "\nFuncionario " << i + 1 << ":\n";

        id = lerInteiro("Digite o id: "); // Lê o ID do funcionário.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');// Limpa o buffer do teclado
        cout << "Digite o nome: ";
        getline(cin, nome); // Lê o nome do funcionário.

        salarioBase = lerFloat("Digite o salario base: "); // Lê o salário base do funcionário

        cout << "Tipo de funcionario:\n";
        cout << "1 - Desenvolvedor\n";
        cout << "2 - Gerente\n";
        cout << "3 - Estagiario\n";

        tipo = lerInteiro("Digite o tipo (1, 2 ou 3): "); // Lê o tipo de funcionário

        switch (tipo) { // Switch case para criar o objeto do tipo de funcionário escolhido
            case 1: { // Cria um Desenvolvedor

                int qtdProjetos;
                qtdProjetos= lerInteiro("Digite a quantidade de projetos: ");
               funcionarios[i] = make_unique<Desenvolvedor>(nome, salarioBase, id, qtdProjetos); // Cria um objeto Desenvolvedor e armazena o ponteiro inteligente no array
                break;
            }
            case 2: { // Cria um Gerente
                float bonusMensal = lerFloat("Digite o bonus mensal: ");
                funcionarios[i] = make_unique<Gerente>(nome, salarioBase, id, bonusMensal); // Cria um objeto Gerente e armazena o ponteiro inteligente no array
                break;
            }
            case 3: { // Cria um Estagiario
                int horasTrabalhadas;
                horasTrabalhadas = lerInteiro("Digite as horas trabalhadas: ");
            funcionarios[i] = make_unique<Estagiario>(nome, salarioBase, id, horasTrabalhadas); // Cria um objeto Estagiario e armazena o ponteiro inteligente no array
                break;
            }
            default: // Caso o tipo seja inválido
            cout << "Tipo inválido. Digite 1, 2, ou 3\n";
                 i--; // Decrementa o contador do loop para tentar cadastrar novamente
        }
    }


    cout << "\nInformações dos Funcionarios:\n";
    for (int i = 0; i < numFuncionarios; ++i) { // Loop para exibir as informações e o salário final de cada funcionário
        funcionarios[i]->exibirInformacoes(); // Chama o método exibirInformacoes() do objeto funcionário
        cout << "Salario final: " << funcionarios[i]->calcularSalarioFinal() << endl << endl; // Chama o método calcularSalarioFinal() e imprime o resultado.
    }
    return 0;
}