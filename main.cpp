#include <iostream>
#include <memory> 
#include <limits> 
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"

using namespace std;

int lerInteiro(const string& mensagem) {
    int valor;
    while (true) {
        cout << mensagem;
        if (cin >> valor) {
            break; 
        } else {
            cout << "Entrada inválida. Digite um número inteiro.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }
    return valor;
}
float lerFloat(const string& mensagem) {
    float valor;
    while (true) {
        cout << mensagem;
        if (cin >> valor) {
            break; 
        } else {
            cout << "Entrada inválida. Digite um número real.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return valor;
}
int main() {
    unique_ptr<FUNCIONARIO> funcionarios[10];
    int numFuncionarios = 0;
    cout << "Quantos funcionarios deseja cadastrar (pelo menos 6)? ";
    cin >> numFuncionarios;
    while (numFuncionarios < 6 || numFuncionarios > 10 ) {
            cout << "Número minimo: 6, e maximo: 10. Insira a quantidade: " ;
            cin >> numFuncionarios;
     }
    for (int i = 0; i < numFuncionarios; ++i) {
        int tipo;
        string nome;
        float salarioBase;
        int id;
        cout << "\nFuncionario " << i + 1 << ":\n";
                id = lerInteiro("Digite o id: ");
                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Digite o nome: ";
                getline(cin, nome);

            salarioBase = lerFloat("Digite o salario base: ");
        int contadorDesenvolvedor = 0;
        int contadorGerente = 0;
        int contadorEstagiario = 0;

           for (int j = 0; j < i; j++) { 
                if (dynamic_cast<Desenvolvedor*>(funcionarios[j].get()) != nullptr) {
                    contadorDesenvolvedor++;
                }
                if (dynamic_cast<Gerente*>(funcionarios[j].get()) != nullptr) {
                    contadorGerente++;
                }
                if (dynamic_cast<Estagiario*>(funcionarios[j].get()) != nullptr) {
                    contadorEstagiario++;
                }
           }
            cout << "Tipo de funcionario:\n";
            cout << "1 - Desenvolvedor\n";
            cout << "2 - Gerente\n";
            cout << "3 - Estagiario\n";

           tipo = lerInteiro("Digite o tipo (1, 2 ou 3): ");

        switch (tipo) {
            case 1: {

               if (contadorDesenvolvedor >= 2){
                        cout << "Tipo 'Desenvolvedor' excedeu numero maximo (2).\n";
                        i--; 
                        break;
                    }

                int qtdProjetos;
                qtdProjetos= lerInteiro("Digite a quantidade de projetos: ");
               funcionarios[i] = make_unique<Desenvolvedor>(nome, salarioBase, id, qtdProjetos);
                break;
            }
            case 2: {
               if (contadorGerente >= 2){
                        cout << "Tipo 'Gerente' excedeu numero maximo (2).\n";
                        i--; 
                        break;
                    }
                float bonusMensal = lerFloat("Digite o bonus mensal: ");
                funcionarios[i] = make_unique<Gerente>(nome, salarioBase, id, bonusMensal);
                break;
            }
            case 3: {
               if (contadorEstagiario >= 2){
                        cout << "Tipo 'Estagiário' excedeu numero maximo (2).\n";
                        i--;
                        break;
                    }
                int horasTrabalhadas;
                horasTrabalhadas = lerInteiro("Digite as horas trabalhadas: ");
            funcionarios[i] = make_unique<Estagiario>(nome, salarioBase, id, horasTrabalhadas);
                break;
            }
            default:
            cout << "Tipo inválido. Digite 1, 2, ou 3\n";
                 i--; 
        }
    }
    cout << "\nInformações dos Funcionarios:\n";
    for (int i = 0; i < numFuncionarios; ++i) {
        funcionarios[i]->exibirInformacoes();
        cout << "Salario final: " << funcionarios[i]->calcularSalarioFinal() << endl << endl;
    }
    return 0;
}