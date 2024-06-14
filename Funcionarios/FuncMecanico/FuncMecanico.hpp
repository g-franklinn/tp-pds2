#ifndef FUNCMECANICO_HPP
#define FUNCMECANICO_HPP
#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatMecanico/Eixo/Eixo.hpp"
#include "../../Materiais/MatMecanico/Parafuso/Parafuso.hpp"
#include "../../Materiais/MatMecanico/Porca/Porca.hpp"
#include "../../Materiais/MatMecanico/MatMecanico.hpp"

#include <string> 

using std::string; 


class FuncMecanico : public Funcionarios{

    public:

        FuncMecanico(string nomeFuncionario, int idFuncionario, string funcaoFuncionario);
        void colocarMaterial() override;
        void retirarMaterial() override;
        ~FuncMecanico();

};

#endif