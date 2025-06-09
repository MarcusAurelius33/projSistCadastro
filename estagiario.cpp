#include <iostream> // Inclui a biblioteca iostream para entrada/saída
#include "estagiario.h" // Inclui o arquivo de cabeçalho da classe Estagiario
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
using namespace std; // Usa o namespace padrão

Estagiario::Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas) { // Construtor da classe Estagiario
    this->nome = nome; // Inicializa o nome do funcionário
    this->salarioBase = salarioBase; // Inicializa o salário base do funcionário
    this->setId(id); // Inicializa o ID do funcionário usando o método da classe base
    this->horasTrabalhadas = horasTrabalhadas; // Inicializa as horas trabalhadas pelo estagiário
}
int Estagiario::getHorasTrabalhadas() { // Método para obter as horas trabalhadas
    return this->horasTrabalhadas; // Retorna as horas trabalhadas
}
float Estagiario::calcularSalarioFinal() { // Método para calcular o salário final do estagiário
    return salarioBase * (horasTrabalhadas / 160.0); // Calcula o salário final: salário base * (horas trabalhadas / 160) - 160 representa o total de horas em um mês
}
void Estagiario::exibirInformacoes() { // Método para exibir as informações do estagiário
    cout << "id: " << this->getId() << endl; // Imprime o ID
    cout << "Nome: " << this->getNome() << endl; // Imprime o nome
    cout << "Tipo: " << this->getTipo() << endl; // Imprime o tipo
    cout << "Horas trabalhadas: " << this->getHorasTrabalhadas() << endl; // Imprime as horas trabalhadas
    cout << "Salário base: " << this->getSalarioBase() << endl; // Imprime o salário base
}
string Estagiario::getTipo() { // Método para retornar o tipo do funcionário
    return this->tipo; // Retorna o tipo "Estagiario"
}