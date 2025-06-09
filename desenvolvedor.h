#ifndef DESENVOLVEDOR_h
#define DESENVOLVEDOR_h
#include "funcionario.h"
#include <string>
using namespace std;

class Desenvolvedor: public FUNCIONARIO {
    private:
    int quantidadeDeProjetos;
    string tipo = "Desenvolvedor";

    public:
    Desenvolvedor(string nome, float salarioBase, int id, int qtdProjetos);

    int getProjetos();
    string getTipo();
    float calcularSalarioFinal();
    void exibirInformacoes() override;
};
#endif