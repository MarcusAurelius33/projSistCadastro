#ifndef DESENVOLVEDOR_h // Guarda de inclusão, previne múltiplas inclusões do mesmo arquivo
#define DESENVOLVEDOR_h
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
#include <string> // Inclui a biblioteca string para manipulação de strings
using namespace std; // Usa o namespace padrão

class Desenvolvedor: public FUNCIONARIO { // Declaração da classe Desenvolvedor, derivada da classe FUNCIONARIO
    private: // Membros privados, acessíveis apenas pela classe
    int quantidadeDeProjetos; // Quantidade de projetos do desenvolvedor
    string tipo = "Desenvolvedor"; // Tipo do funcionário, definido como "Desenvolvedor"

    public: // Membros públicos, acessíveis por qualquer parte do código
    Desenvolvedor(string nome, float salarioBase, int id, int qtdProjetos); // Construtor da classe Desenvolvedor

    int getProjetos(); // Método para obter a quantidade de projetos do desenvolvedor
    string getTipo(); // Método para obter o tipo do funcionário
    float calcularSalarioFinal(); // Método para calcular o salário final do desenvolvedor (sobrescreve o método virtual da classe base)
    void exibirInformacoes() override; // Método para exibir as informações do desenvolvedor (sobrescreve o método virtual da classe base)
};
#endif