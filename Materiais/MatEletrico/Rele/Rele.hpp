#ifndef RELE
#define RELE

#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include <iostream>

class Rele : public MatEletrico{
    public:
        Rele();
        Rele(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente);
        void adicionarRele(Rele* rele, int quantidade);
        void retirarRele(Rele* rele, int quantidade);
        ~Rele();
};

#endif