#ifndef FUNCIONARIO_h
#define FUNCIONARIO_h
#include <string>

using namespace std;

class FUNCIONARIO{
    protected:
    string nome;
    float salarioBase;

    private:
    int id;

    public:
    void setNome(string a);
    string getNome();

    void setSalarioBase(float a);
    float getSalarioBase();

    void setId(int a);
    int getId();

    virtual void exibirInformacoes();

    virtual float calcularSalarioFinal() = 0;

};

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
#endif;
