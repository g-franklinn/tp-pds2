#ifndef MOTOR
#define MOTOR

#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include <iostream>

class Motor : public MatEletrico{
    public:
        Motor();
        Motor(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente);
        void adicionarMotor(Motor* motor, int quantidade);
        void retirarMotor(Motor* motor, int quantidade);
        ~Motor();
};

#endif