#include <iostream>
#include <string>
#include "Funcionarios/Funcionarios.hpp"
#include "Funcionarios/FuncEletrico/FuncEletrico.hpp"
#include "Funcionarios/FuncMecanico/FuncMecanico.hpp"
#include "Materiais/Material/Material.hpp"
#include "Materiais/MatEletrico/MatEletrico.hpp"
#include "Materiais/MatEletrico/Disjuntor/Disjuntor.hpp"
#include "Materiais/MatEletrico/Motor/Motor.hpp"
#include "Materiais/MatEletrico/Rele/Rele.hpp"
#include "Materiais/MatMecanico/MatMecanico.hpp"
#include "Materiais/MatMecanico/Eixo/Eixo.hpp"
#include "Materiais/MatMecanico/Parafuso/Parafuso.hpp"
#include "Materiais/MatMecanico/Porca/Porca.hpp"

using namespace std;

int main() {
        // Criação de funcionários
        FuncEletrico* elec1 = new FuncEletrico("Guido", 101, "Eletricista");
        FuncMecanico* mec1 = new FuncMecanico("Barbara", 102, "Mecânica");

        // Criação de materiais elétricos
        Disjuntor* disj1 = new Disjuntor("Disjuntor Tipo A", 201, 50.0, "IP20", 220, 10, 100);
        Motor* motor1 = new Motor("Motor Tipo B", 202, 150.0, "IP44", 220, 15, 50);
        Rele* rele1 = new Rele("Rele Tipo C", 203, 20.0, "IP20", 220, 5, 200);

        // Criação de materiais mecânicos
        Eixo* eixo1 = new Eixo("Eixo Tipo D", 301, 30.0, "IP20", 5.0, 75);
        Parafuso* parafuso1 = new Parafuso("Parafuso Tipo E", 302, 0.5, "IP20", 0.1, 500);
        Porca* porca1 = new Porca("Porca Tipo F", 303, 0.2, "IP20", 0.05, 300);


    cout << "Nome:" << eixo1->getNome_Material() << endl;
        // Exibição de informações dos funcionários
      /*  cout << "Informações dos Funcionários:" << endl;

        cout << "Funcionário Elétrico:" << endl;
        cout << "Nome: " << elec1->getNome_Funcionario() << endl;
        cout << "ID: " << elec1->getId_Funcionario() << endl;
        cout << "Função: " << elec1->getFuncao_Funcionario() << endl;
        cout << endl;
*/

       /*   adicionar e retirar materiais elétricos
        cout << "Adicionando e retirando materiais elétricos..." << endl;

        elec1->colocarMaterial(*disj1, 1);
        elec1->retirarMaterial(*disj1, 1);

        elec1->colocarMaterial(*motor1, 1);
        elec1->retirarMaterial(*motor1, 1);

        elec1->colocarMaterial(*rele1, 1);
        elec1->retirarMaterial(*rele1, 1);

        // adicionar e retirar materiais mecânicos
        cout << "Adicionando e retirando materiais mecânicos..." << endl;

        mec1->colocarMaterial(*eixo1, 1);
        mec1->retirarMaterial(*eixo1, 1);

        mec1->colocarMaterial(*parafuso1, 1);
        mec1->retirarMaterial(*parafuso1, 1);

        mec1->colocarMaterial(*porca1, 1);
        mec1->retirarMaterial(*porca1, 1);

**/
    return 0;
}
