#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include "Motor.hpp"
#include <iostream>
using namespace std;

Motor::Motor(){
};

Motor::Motor(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente)
 : MatEletrico() {
    this->nomeMaterial = nomeMaterial;
    this->idMaterial = idMaterial;
    this->preco = preco;
    this->quantidade = quantidade;
    this->ip_protec = ip_protec;
    this->tensao = tensao;
    this->corrente = corrente;
 };

void Motor::adicionarMotor(Motor motor, int quant){
    motor.quantidade += quant;
};

void Motor::retirarMotor(Motor motor, int quant){
    if (motor.quantidade < quant){
        cout<<"Não é possível retirar. Em estoque = " << motor.quantidade<< endl;
    }
    else
        motor.quantidade -= quant;
};

Motor::~Motor(){
    cout<< "Deletando Motor"<<endl;
};
