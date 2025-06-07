#include <iostream>
#include "funcionario.h"

using namespace std;

void FUNCIONARIO::setNome(string a){
    this->nome = a;
}
string FUNCIONARIO::getNome(){
    return nome;
}

void FUNCIONARIO::setSalarioBase(float a){
    this->salarioBase = a;
}
float FUNCIONARIO::getSalarioBase(){
    return salarioBase;
}

void FUNCIONARIO::setId(int a){
    this->id = a;
}
int FUNCIONARIO::getId(){
    return id;
}

void FUNCIONARIO::exibirInformacoes(){
    cout << "id: " << this->getId() << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Salário base: " << this->getSalarioBase() << endl;
}

Desenvolvedor::Desenvolvedor(string nome, float salarioBase, int id, int qtdProjetos) {
    this->nome = nome;
    this->salarioBase = salarioBase;
    setId(id);
    quantidadeDeProjetos = qtdProjetos;
}
int Desenvolvedor::getProjetos(){
    return this->quantidadeDeProjetos;
}
float Desenvolvedor::calcularSalarioFinal() {
    return salarioBase + (500 * quantidadeDeProjetos);
}
void Desenvolvedor::exibirInformacoes() {
    cout << "id: " << this->getId() << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Tipo: " << this->getTipo() << endl;
    cout << "Projetos: " << this->getProjetos() << endl;
    cout << "Salário base: " << this->getSalarioBase() << endl;
    cout << "Salário final: " << this->calcularSalarioFinal() << endl;
}

Gerente::Gerente(string nome, float salarioBase, int id, float bonusMensal) {
    this->nome = nome;
    this->salarioBase = salarioBase;
    setId(id);
    bonusMensal = bonusMensal;
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
    cout << "Salário final:" << this->calcularSalarioFinal() << endl;
}

Estagiario::Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas) {
    this->nome = nome;
    this->salarioBase = salarioBase;
    setId(id);
    horasTrabalhadas = horasTrabalhadas;
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
    cout << "Salário final " << this->calcularSalarioFinal() << endl;
}

string Desenvolvedor::getTipo() {
    return this->tipo;
}
string Gerente::getTipo() {
    return this->tipo;
}
string Estagiario::getTipo() {
    return this->tipo;
}
