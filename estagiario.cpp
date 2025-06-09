#include <iostream>
#include "estagiario.h"
#include "funcionario.h"
using namespace std;

Estagiario::Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas) {
    this->nome = nome;
    this->salarioBase = salarioBase;
    this->setId(id);
    this->horasTrabalhadas = horasTrabalhadas; 
}
int Estagiario::getHorasTrabalhadas() {
    return this->horasTrabalhadas;
}
float Estagiario::calcularSalarioFinal() {
    return salarioBase * (horasTrabalhadas / 160.0);
}
void Estagiario::exibirInformacoes() {
    cout << "id: " << this->getId() << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Tipo: " << this->getTipo() << endl;
    cout << "Horas trabalhadas: " << this->getHorasTrabalhadas() << endl;
    cout << "Salário base: " << this->getSalarioBase() << endl;
}
string Estagiario::getTipo() {
    return this->tipo;
}