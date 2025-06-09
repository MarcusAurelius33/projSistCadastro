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
