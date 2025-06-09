#include <iostream> // Inclui a biblioteca iostream para entrada/saída
#include "gerente.h" // Inclui o arquivo de cabeçalho da classe Gerente
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
using namespace std; // Usa o namespace padrão

Gerente::Gerente(string nome, float salarioBase, int id, float bonusMensal) { // Construtor da classe Gerente
    this->nome = nome; // Inicializa o nome do funcionário
    this->salarioBase = salarioBase; // Inicializa o salário base do funcionário
    this->setId(id); // Inicializa o ID do funcionário usando o método da classe base
    this->bonusMensal = bonusMensal; // Inicializa o bônus mensal do gerente
}
float Gerente::getBonusMensal () { // Método para obter o bônus mensal
    return this->bonusMensal; // Retorna o bônus mensal
}
float Gerente::calcularSalarioFinal() { // Método para calcular o salário final do gerente
    return salarioBase + bonusMensal; // Calcula o salário final: salário base + bônus mensal
}
void Gerente::exibirInformacoes() { // Método para exibir as informações do gerente
    cout << "id: " << this->getId() << endl; // Imprime o ID
    cout << "Nome: " << this->getNome() << endl; // Imprime o nome
    cout << "Tipo: " << this->getTipo() << endl; // Imprime o tipo
    cout << "Bônus: " << this->getBonusMensal() << endl; // Imprime o bônus mensal
    cout << "Salário base: " << this->getSalarioBase() << endl; // Imprime o salário base
}
string Gerente::getTipo() { // Método para retornar o tipo do funcionário
    return this->tipo; // Retorna o tipo "Gerente"
}