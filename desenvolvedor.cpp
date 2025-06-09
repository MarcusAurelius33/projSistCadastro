#include <iostream>
#include "desenvolvedor.h"
#include "funcionario.h"
using namespace std;

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
}
string Desenvolvedor::getTipo() {
    return this->tipo;
}