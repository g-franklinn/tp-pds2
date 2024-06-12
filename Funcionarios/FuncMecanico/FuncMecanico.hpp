#ifndef FUNCMECANICO_HPP
#define FUNCMECANICO_HPP
#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatMecanico/MatMecanico.hpp"

class FuncMecanico : public Funcionarios{

    public:

        FuncMecanico();
        void colocarMaterial() override;
        void retirarMaterial() override;
        ~FuncMecanico();

};

#endif