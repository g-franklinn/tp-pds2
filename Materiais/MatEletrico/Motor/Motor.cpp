#include "../Material/Material.hpp"
#include "MatEletrico.hpp"
#include "Motor.hpp"
#include <iostream>
using namespace std;

Motor::Motor(){
};

Motor::Motor(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade):
    MatEletrico(nome, id, preco, ip_protec, tensao, corrente), quantidade(quantidade){
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
