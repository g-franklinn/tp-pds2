#ifndef DISJUNTOR
#define DISJUNTOR

#include "../../Material/Material.hpp"
#include "../MatEletrico.hpp"
#include <iostream>

class Disjuntor : public MatEletrico{
    public:
        int quantidade;
        Disjuntor();
        Disjuntor(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade);
        void adicionarDisjuntor(Disjuntor disjuntor, int quantidade);
        void retirarDisjuntor(Disjuntor disjuntor, int quantidade);
        ~Disjuntor();
};

#endif