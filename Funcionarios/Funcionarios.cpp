#include "Funcionarios.hpp"
#include <string>

Funcionarios::Funcionarios(){}

string Funcionarios::getNome_Funcionario(){
    return nomeFuncionario;
}

void Funcionarios::setNome_Funcionario(const string& nome){
    nomeFuncionario = nome;
}

int Funcionarios::getId_Funcionario(){
    return idFuncionario;
}

void Funcionarios::setId_Funcionario(int id){
    idFuncionario = id;
}

string Funcionarios::getFuncao_Funcionario(){
    return funcaoFuncionario;
}

void Funcionarios::setFuncao_Funcionario(const string& funcao){
    funcaoFuncionario = funcao;
}

Funcionarios::~Funcionarios() {};