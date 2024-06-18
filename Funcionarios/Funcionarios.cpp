#include "Funcionarios.hpp"
#include <string>
#include <iostream>

using namespace std;

Funcionarios::Funcionarios(){};

Funcionarios::Funcionarios(string nomeFuncionario, int idFuncionario, string funcaoFuncionario){
    this -> nomeFuncionario = nomeFuncionario;
    this -> idFuncionario = idFuncionario;
    this -> funcaoFuncionario =  funcaoFuncionario;
}

string Funcionarios::getNome_Funcionario(){
    return this->nomeFuncionario;
}

void Funcionarios::setNome_Funcionario(const string& nome){
    nomeFuncionario = nome;
}

int Funcionarios::getId_Funcionario(){
    return this->idFuncionario;
}

void Funcionarios::setId_Funcionario(int id){
    idFuncionario = id;
}

string Funcionarios::getFuncao_Funcionario(){
    return this->funcaoFuncionario;
}

void Funcionarios::setFuncao_Funcionario(const string& funcao){
    funcaoFuncionario = funcao;
}

Funcionarios::~Funcionarios() {
    cout<< "deletando funcionario"<<endl;
};