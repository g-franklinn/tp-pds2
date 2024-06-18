#ifndef RELE
#define RELE

#include "../../Material/Material.hpp"
#include "../MatEletrico.hpp"
#include <iostream>

class Rele : public MatEletrico{
    public:
        int quantidade;

        Rele();
        Rele(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade);
        void adicionarRele(Rele rele, int quantidade);
        void retirarRele(Rele rele, int quantidade);
        ~Rele();
};

#endif