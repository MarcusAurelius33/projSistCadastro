#ifndef ESTAGIARIO_h // Guarda de inclusão, previne múltiplas inclusões do mesmo arquivo
#define ESTAGIARIO_h
#include "funcionario.h" // Inclui o arquivo de cabeçalho da classe base FUNCIONARIO
#include <string> // Inclui a biblioteca string para manipulação de strings
using namespace std; // Usa o namespace padrão

class Estagiario: public FUNCIONARIO { // Declaração da classe Estagiario, derivada da classe FUNCIONARIO
    private: // Membros privados, acessíveis apenas pela classe
    int horasTrabalhadas; // Horas trabalhadas pelo estagiário
    string tipo = "Estagiario"; // Tipo do funcionário, definido como "Estagiario"

    public: // Membros públicos, acessíveis por qualquer parte do código
    Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas); // Construtor da classe Estagiario

    string getTipo(); // Método para obter o tipo do funcionário
    int getHorasTrabalhadas(); // Método para obter as horas trabalhadas pelo estagiário
    float calcularSalarioFinal(); // Método para calcular o salário final do estagiário (sobrescreve o método virtual da classe base)
    void exibirInformacoes() override; // Método para exibir as informações do estagiário (sobrescreve o método virtual da classe base)
};
#endif