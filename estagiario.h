#ifndef ESTAGIARIO_h
#define ESTAGIARIO_h
#include "funcionario.h"
#include <string>
using namespace std;

class Estagiario: public FUNCIONARIO {
    private:
    int horasTrabalhadas;
    string tipo = "Estagiario";

    public:
    Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas);

    string getTipo();
    int getHorasTrabalhadas();
    float calcularSalarioFinal();
    void exibirInformacoes() override;
};
#endif