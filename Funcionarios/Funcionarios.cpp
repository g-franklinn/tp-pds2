#include "Funcionarios.hpp"
#include <string>
#include <iostream>

using namespace std;

Funcionarios::Funcionarios(){};

Funcionarios::Funcionarios(string nomeFuncionario, int idFuncionario, string funcaoFuncionario) 
:nomeFuncionario(nomeFuncionario), idFuncionario(idFuncionario), funcaoFuncionario(funcaoFuncionario){};

string Funcionarios::getNome_Funcionario(){
    return nomeFuncionario;
}

void Funcionarios::setNome_Funcionario(string nome){
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

void Funcionarios::setFuncao_Funcionario(string funcao){
    funcaoFuncionario = funcao;
}

Funcionarios::~Funcionarios() {
    cout<< "deletando funcionario"<<endl;
};