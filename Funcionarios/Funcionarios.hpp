#ifndef FUNCIONARIOS
#define FUNCIONARIOS 

#include <string> 

using std::string; 

class Funcionarios {
    protected:
    string nomeFuncionario;
    int idFuncionario;
    string funcaoFuncionario;

    public:
    //Construtor padrão
    Funcionarios(string nomeFuncionario, int idFuncionario, string funcaoFuncionario);

    string getNome_Funcionario();
    void setNome_Funcionario(const string& nomeFuncionario);
    int getId_Funcionario();
    void setId_Funcionario(int idFuncionario);
    string getFuncao_Funcionario();
    void setFuncao_Funcionario(const string& funcaoFuncionario);

    //Métodos abstratos 
    virtual void colocarMaterial() = 0;
    virtual void retirarMaterial() = 0;

    virtual ~Funcionarios(); //Destrutor 

};


#endif