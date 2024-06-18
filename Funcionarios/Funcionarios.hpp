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
    Funcionarios();
    Funcionarios(string nomeFuncionario, int idFuncionario, string funcaoFuncionario);

    virtual string getNome_Funcionario();
    void setNome_Funcionario(string nomeFuncionario);
    virtual int getId_Funcionario();
    void setId_Funcionario(int idFuncionario);
    virtual string getFuncao_Funcionario();
    void setFuncao_Funcionario(string funcaoFuncionario);

    virtual ~Funcionarios(); //Destrutor 
};

#endif