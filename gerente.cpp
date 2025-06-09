#include <iostream>
#include "gerente.h"
#include "funcionario.h"
using namespace std;

Gerente::Gerente(string nome, float salarioBase, int id, float bonusMensal) {
    this->nome = nome;
    this->salarioBase = salarioBase;
    this->setId(id);
    this->bonusMensal = bonusMensal; 
}
float Gerente::getBonusMensal () {
    return this->bonusMensal;
}
float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}
void Gerente::exibirInformacoes() {
    cout << "id: " << this->getId() << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Tipo: " << this->getTipo() << endl;
    cout << "Bônus: " << this->getBonusMensal() << endl;
    cout << "Salário base: " << this->getSalarioBase() << endl;
}
string Gerente::getTipo() {
    return this->tipo;
}