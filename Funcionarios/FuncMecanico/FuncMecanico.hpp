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
        FuncMecanico();
        FuncMecanico(string nomeFuncionario, int idFuncionario, string funcaoFuncionario);

        string getNome_Funcionario() override;
        int getId_Funcionario() override;
        string getFuncao_Funcionario() override;

        void colocarMaterial(Eixo* eixo, int q);
        void colocarMaterial(Porca* porca, int q);
        void colocarMaterial(Parafuso* parafuso, int q);
        
        void retirarMaterial(Eixo* eixo, int q);
        void retirarMaterial(Porca* porca, int q);
        void retirarMaterial(Parafuso* parafuso, int q);
        ~FuncMecanico();
};

#endif