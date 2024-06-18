#ifndef PORCA
#define PORCA

#include "../../Material/Material.hpp"
#include "../MatMecanico.hpp"
#include <iostream>

class Porca : public MatMecanico{
    public:
        int quantidade;

        Porca();
        Porca(string nome, int id, double preco, string ip_protec, double peso, int quantidade);
        void adicionarPorca(Porca porca, int q);
        void retirarPorca(Porca porca, int q);
        ~Porca();
        
};

#endif