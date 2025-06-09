#include <iostream> // Inclui a biblioteca iostream para entrada/saída
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe FUNCIONARIO

using namespace std; // Usa o namespace padrão para evitar o uso de std::

// Implementação dos métodos da classe FUNCIONARIO

void FUNCIONARIO::setNome(string a){ // Método para definir o nome do funcionário
    this->nome = a; // Atribui o valor do parâmetro 'a' ao atributo 'nome'
}
string FUNCIONARIO::getNome(){ // Método para obter o nome do funcionário
    return nome; // Retorna o valor do atributo 'nome'
}

void FUNCIONARIO::setSalarioBase(float a){ // Método para definir o salário base do funcionário
    this->salarioBase = a; // Atribui o valor do parâmetro 'a' ao atributo 'salarioBase'
}
float FUNCIONARIO::getSalarioBase(){ // Método para obter o salário base do funcionário
    return salarioBase; // Retorna o valor do atributo 'salarioBase'
}

void FUNCIONARIO::setId(int a){ // Método para definir o ID do funcionário
    this->id = a; // Atribui o valor do parâmetro 'a' ao atributo 'id'
}
int FUNCIONARIO::getId(){ // Método para obter o ID do funcionário
    return id; // Retorna o valor do atributo 'id'
}
void FUNCIONARIO::exibirInformacoes(){ // Método para exibir informações do funcionário
    cout << "id: " << this->getId() << endl; // Imprime o ID do funcionário
    cout << "Nome: " << this->getNome() << endl; // Imprime o nome do funcionário
    cout << "Salário base: " << this->getSalarioBase() << endl; // Imprime o salário base do funcionário
}
