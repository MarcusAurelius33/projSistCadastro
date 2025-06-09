#ifndef FUNCIONARIO_h // Guarda de inclusão, previne múltiplas inclusões do mesmo arquivo
#define FUNCIONARIO_h
#include <string> // Inclui a biblioteca string para manipulação de strings

using namespace std; // Usa o namespace padrão para evitar o uso de std::

class FUNCIONARIO{ // Declaração da classe FUNCIONARIO
    protected: // Membros protegidos, acessíveis pela classe e suas derivadas
    string nome; // Nome do funcionário
    float salarioBase; // Salário base do funcionário

    private: // Membros privados, acessíveis apenas pela classe
    int id; // ID do funcionário

    public: // Membros públicos, acessíveis por qualquer parte do código
    void setNome(string a); // Método para definir o nome do funcionário
    string getNome(); // Método para obter o nome do funcionário

    void setSalarioBase(float a); // Método para definir o salário base do funcionário
    float getSalarioBase(); // Método para obter o salário base do funcionário

    void setId(int a); // Método para definir o ID do funcionário
    int getId(); // Método para obter o ID do funcionário

    virtual void exibirInformacoes(); // Método virtual para exibir informações do funcionário. Pode ser sobrescrito por classes derivadas.

    virtual float calcularSalarioFinal() = 0; // Método virtual puro para calcular o salário final. Torna a classe abstrata, obrigando as classes derivadas a implementarem este método.
};
#endif
