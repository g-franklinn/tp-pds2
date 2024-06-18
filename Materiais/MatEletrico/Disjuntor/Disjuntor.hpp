#ifndef DISJUNTOR
#define DISJUNTOR

#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include <iostream>

class Disjuntor : public MatEletrico{
    public:
        Disjuntor();
        Disjuntor(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente);
        void adicionarDisjuntor(Disjuntor* disjuntor, int quantidade);
        void retirarDisjuntor(Disjuntor* disjuntor, int quantidade);
        ~Disjuntor();
};

#endif