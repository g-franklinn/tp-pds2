#ifndef PARAFUSO
#define PARAFUSO

#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include <iostream>

class Parafuso : public MatMecanico{
    public:
        Parafuso();
        Parafuso(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso);
        void adicionarParafuso(Parafuso* parafuso, int q);
        void retirarParafuso(Parafuso* parafuso, int q);
        ~Parafuso();
};

#endif