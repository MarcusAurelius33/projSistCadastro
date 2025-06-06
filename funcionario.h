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

    virtual void exibirInformações();

    virtual float calcularSalarioFinal() = 0;

};
#endif;