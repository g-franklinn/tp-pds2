#ifndef PORCA
#define PORCA

#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include <iostream>

class Porca : public MatMecanico{
    public:
        Porca();
        Porca(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso);
        void adicionarPorca(Porca porca, int q);
        void retirarPorca(Porca porca, int q);
        ~Porca();
        
};

#endif