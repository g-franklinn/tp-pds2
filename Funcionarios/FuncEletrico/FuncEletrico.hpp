#ifndef FUNCELETRICO 
#define FUNCELETRICO 
#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatEletrico/MatEletrico.hpp"
#include "../../Materiais/MatEletrico/Disjuntor/Disjuntor.hpp"
#include "../../Materiais/MatEletrico/Motor/Motor.hpp"
#include "../../Materiais/MatEletrico/Rele/Rele.hpp"


#include <string> 

using std::string; 


class FuncEletrico : public Funcionarios{

    public:

        FuncEletrico();
        FuncEletrico(string nomeFuncionario, int idFuncionario, string funcaoFuncionario);

        void colocarMaterial(Disjuntor disjuntor, int quant);
        void colocarMaterial(Motor motor, int quant);
        void colocarMaterial(Rele rele, int quant);

        void retirarMaterial(Disjuntor disjuntor, int quant);
        void retirarMaterial(Motor motor, int quant);
        void retirarMaterial(Rele rele, int quant);
        ~FuncEletrico();

};

#endif