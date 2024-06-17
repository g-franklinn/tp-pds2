#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatEletrico/MatEletrico.hpp"
#include "../../Materiais/MatEletrico/Disjuntor/Disjuntor.hpp"
#include "../../Materiais/MatEletrico/Motor/Motor.hpp"
#include "../../Materiais/MatEletrico/Rele/Rele.hpp"
#include "FuncEletrico.hpp"

#include <iostream>
#include <string> 

using namespace std; 

FuncEletrico::FuncEletrico{};

FuncEletrico::FuncEletrico(string nome, int id, string funcao) 
    : Funcionarios(nomeFuncionario, idFuncionario, funcaoFuncionario){}

void FuncEletrico::colocarMaterial(Disjuntor disjuntor, int quant){
    disjuntor.adicionarDisjuntor(disjuntor, quant);
        
}
void FuncEletrico::colocarMaterial(Motor motor, int quant){
     motor.adicionarMotor(motor, quant);
        
}
void FuncEletrico::colocarMaterial(Rele rele, int quant){
    rele.adicionarPRele(rele, quant);
        
};

void FuncEletrico::retirarMaterial(Disjuntor disjuntor, int quant){
    disjuntor.retirarEixo(disjuntor, quant);
};
void FuncEletrico::retirarMaterial(Motor motor, int quant){
     motor.retirarMotor(motor, quant);
};
void FuncEletrico::retirarMaterial(Rele rele, int quant){
    rele.retirarRele(rele, quant);
};

FuncEletrico::~FuncEletrico(){
    cout<<"Deletando Funcionário Elétrico"<<endl;
};