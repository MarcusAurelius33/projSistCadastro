#ifndef GERENTE_h
#define GERENTE_h
#include "funcionario.h"
#include <string>
using namespace std;

class Gerente: public FUNCIONARIO {
    private:
    float bonusMensal;
    string tipo = "Gerente";
    
    public:
    Gerente(string nome, float salarioBase, int id, float bonusMensal);

    string getTipo();
    float getBonusMensal();
    float calcularSalarioFinal();
    void exibirInformacoes() override;
};
#endif