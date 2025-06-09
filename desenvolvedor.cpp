#include <iostream> // Inclui a biblioteca iostream para entrada/saída
#include "desenvolvedor.h" // Inclui o arquivo de cabeçalho da classe Desenvolvedor
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
using namespace std; // Usa o namespace padrão


Desenvolvedor::Desenvolvedor(string nome, float salarioBase, int id, int qtdProjetos) { // Construtor da classe Desenvolvedor
    this->nome = nome; // Inicializa o nome do funcionário
    this->salarioBase = salarioBase; // Inicializa o salário base do funcionário
    setId(id); // Inicializa o ID do funcionário usando o método da classe base
    quantidadeDeProjetos = qtdProjetos; // Inicializa a quantidade de projetos do desenvolvedor
}
int Desenvolvedor::getProjetos(){ // Método para obter a quantidade de projetos
    return this->quantidadeDeProjetos; // Retorna a quantidade de projetos
}
float Desenvolvedor::calcularSalarioFinal() { // Método para calcular o salário final do desenvolvedor
    return salarioBase + (500 * quantidadeDeProjetos); // Calcula o salário final: salário base + (500 * quantidade de projetos)
}
void Desenvolvedor::exibirInformacoes() { // Método para exibir as informações do desenvolvedor
    cout << "id: " << this->getId() << endl; // Imprime o ID
    cout << "Nome: " << this->getNome() << endl; // Imprime o nome
    cout << "Tipo: " << this->getTipo() << endl; // Imprime o tipo
    cout << "Projetos: " << this->getProjetos() << endl; // Imprime a quantidade de projetos
    cout << "Salário base: " << this->getSalarioBase() << endl; // Imprime o salário base
}
string Desenvolvedor::getTipo() { // Método para retornar o tipo do funcionário
    return this->tipo; // Retorna o tipo "Desenvolvedor"
}