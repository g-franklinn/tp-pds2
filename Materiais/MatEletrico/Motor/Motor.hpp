#ifndef MOTOR
#define MOTOR

#include "../../Material/Material.hpp"
#include "../MatEletrico.hpp"
#include <iostream>

class Motor : public MatEletrico{
    public:
        int quantidade;
        Motor();
        Motor(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade);
        void adicionarMotor(Motor motor, int quantidade);
        void retirarMotor(Motor motor, int quantidade);
        ~Motor();
};

#endif