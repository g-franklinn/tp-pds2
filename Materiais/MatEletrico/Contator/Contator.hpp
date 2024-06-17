#ifndef CONTATOR
#define CONTATOR

#include "../Material/Material.hpp"
#include "MatEletrico.hpp"
#include <iostream>

class Contator : public MatEletrico{
    public:
        int quantidade;
        Contator();
        Contator(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade);
        void adicionarContator(Contator contator, int quantidade);
        void retirarContator(Contator contator, int quantidade);
        ~Contator();
};

#endif