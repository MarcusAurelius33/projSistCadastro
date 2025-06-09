#ifndef GERENTE_h // Guarda de inclusão, previne múltiplas inclusões do mesmo arquivo
#define GERENTE_h
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
#include <string> // Inclui a biblioteca string para manipulação de strings
using namespace std; 

class Gerente: public FUNCIONARIO { // Declaração da classe Gerente, derivada da classe FUNCIONARIO
    private: // Membros privados, acessíveis apenas pela classe
    float bonusMensal; // Bônus mensal do gerente
    string tipo = "Gerente"; // Tipo do funcionário, definido como "Gerente"

    public: // Membros públicos, acessíveis por qualquer parte do código
    Gerente(string nome, float salarioBase, int id, float bonusMensal); // Construtor da classe Gerente

    string getTipo(); // Método para obter o tipo do funcionário
    float getBonusMensal(); // Método para obter o bônus mensal do gerente
    float calcularSalarioFinal(); // Método para calcular o salário final do gerente (sobrescreve o método virtual da classe base)
    void exibirInformacoes() override; // Método para exibir as informações do gerente (sobrescreve o método virtual da classe base)
};
#endif