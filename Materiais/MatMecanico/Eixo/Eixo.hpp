#ifndef EIXO
#define EIXO

#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include <iostream>
#include <string>

class Eixo : public MatMecanico{
    public:
        Eixo();
        Eixo(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso);
        void adicionarEixo(Eixo* eixo, int q);
        void retirarEixo(Eixo* eixo, int q);
        ~Eixo();

};

#endif