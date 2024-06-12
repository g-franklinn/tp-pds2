#ifndef FUNCELETRICO_HPP
#define FUNCELETRICO_HPP
#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatEletrico/MatEletrico.hpp"


class FuncEletrico : public Funcionarios{

    public:

        FuncEletrico();
        void colocarMaterial() override;
        void retirarMaterial() override;
        ~FuncEletrico();

};

#endif