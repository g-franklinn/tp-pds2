#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatMecanico/MatMecanico.hpp"
#include "../../Materiais/MatMecanico/Parafuso/Parafuso.hpp"
#include "../../Materiais/MatMecanico/Porca/Porca.hpp"
#include "../../Materiais/MatMecanico/MatMecanico.hpp"
#include "FuncMecanico.hpp"

#include <iostream>
#include <string> 

using namespace std; 

FuncMecanico::FuncMecanico(){};

FuncMecanico::FuncMecanico(string nomeFuncionario, int idFuncionario, string funcaoFuncionario) 
    : Funcionarios(nomeFuncionario, idFuncionario, funcaoFuncionario){}

void FuncMecanico::colocarMaterial(Eixo* eixo, int q){
    eixo->adicionarEixo(eixo, q);
}

string FuncMecanico::getNome_Funcionario(){
    return nomeFuncionario;
}

int FuncMecanico::getId_Funcionario(){
    return idFuncionario;
}


string FuncMecanico::getFuncao_Funcionario(){
    return funcaoFuncionario;
}

void FuncMecanico::colocarMaterial(Porca* porca, int q){
    porca->adicionarPorca(porca, q);
}

void FuncMecanico::colocarMaterial(Parafuso* parafuso, int q){
    parafuso->adicionarParafuso(parafuso, q); 
}

void FuncMecanico :: retirarMaterial(Eixo* eixo, int q){
    eixo->retirarEixo(eixo, q);
}

void FuncMecanico :: retirarMaterial(Porca* porca, int q){
    porca->retirarPorca(porca, q);
}

void FuncMecanico :: retirarMaterial(Parafuso* parafuso, int q){
    parafuso->retirarParafuso(parafuso, q);
}

FuncMecanico:: ~FuncMecanico(){
    cout<<"Deletando Funcionário Mecânico"<<endl;
}