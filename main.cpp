#include "Funcionarios/Funcionarios.hpp"
#include "Funcionarios/FuncEletrico/FuncEletrico.hpp"
#include "Funcionarios/FuncMecanico/FuncMecanico.hpp"
#include "Materiais/Material/Material.hpp"
#include "Materiais/MatEstoque/MatEstoque.hpp"
#include "Materiais/MatEletrico/MatEletrico.hpp"
#include "Materiais/MatEletrico/Disjuntor/Disjuntor.hpp"
#include "Materiais/MatEletrico/Motor/Motor.hpp"
#include "Materiais/MatEletrico/Rele/Rele.hpp"
#include "Materiais/MatMecanico/MatMecanico.hpp"
#include "Materiais/MatMecanico/Eixo/Eixo.hpp"
#include "Materiais/MatMecanico/Parafuso/Parafuso.hpp"
#include "Materiais/MatMecanico/Porca/Porca.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
        // Criação de funcionários
        FuncEletrico* elec1 = new FuncEletrico("Guido", 101, "Eletricista");
        FuncEletrico* elec2 = new FuncEletrico("Franklin", 102, "Eletricista");
        FuncEletrico* elec3 = new FuncEletrico("Gustavo", 103, "Eletricista");
        FuncMecanico* mec1 = new FuncMecanico("Barbara", 104, "Mecânica");
        FuncMecanico* mec2 = new FuncMecanico("Marcus", 105, "Mecânica");

        // Criação de materiais elétricos
        Disjuntor* disj1 = new Disjuntor("Disjuntor Tipo A", 201, 50.0, 100, "IP20", 220, 10);
        Motor* motor1 = new Motor("Motor Tipo B", 202, 150.0, 50, "IP44", 220, 15);
        Rele* rele1 = new Rele("Rele Tipo C", 203, 20.0, 200, "IP20", 220, 5);

        // Criação de materiais mecânicos
        Eixo* eixo1 = new Eixo("Eixo Tipo D", 301, 30.0, 75, "IP20", 5.0);
        Parafuso* parafuso1 = new Parafuso("Parafuso Tipo E", 302, 0.5, 500, "IP20", 0.1);
        Porca* porca1 = new Porca("Porca Tipo F", 303, 0.2, 300, "IP20", 0.05);


        //Exibição de informações dos funcionários
        vector<Funcionarios*> funcionarios;
        funcionarios.push_back(elec1);
        funcionarios.push_back(elec2);
        funcionarios.push_back(elec3);
        funcionarios.push_back(mec1);
        funcionarios.push_back(mec2);

        cout << "Lista de funcionarios:" << endl;
        for(auto funcionario : funcionarios){
        cout << "Nome: " << funcionario->getNome_Funcionario() << endl;
        cout << "ID: " << funcionario->getId_Funcionario() << endl;
        cout << "Função: " << funcionario->getFuncao_Funcionario() << endl;
        cout << endl;
        }

        //Exibição de informações dos materiais elétricos
        vector<MatEletrico*> mateletricos;
        mateletricos.push_back(disj1);
        mateletricos.push_back(motor1);
        mateletricos.push_back(rele1);

        cout << "Lista de materiais eletricos:" << endl;
        for(auto mateletrico : mateletricos){
        cout << "Nome: " << mateletrico->getNome_Material() << endl;
        cout << "ID: " << mateletrico->getId_Material() << endl;
        cout << "Preco: " << mateletrico->getPreco() << endl;
        cout << "Ip_protec: " << mateletrico->getIp_protec() << endl;
        cout << "Tensao: " << mateletrico->getTensao() << endl;
        cout << "Corrente: " << mateletrico->getCorrente() << endl;
        cout << endl;
        }

        //Exibição de informações dos materiais mecênicos
        vector<MatMecanico*> matmecanicos;
        matmecanicos.push_back(eixo1);
        matmecanicos.push_back(parafuso1);
        matmecanicos.push_back(porca1);

        cout << "Lista de materiais mecanicos:" << endl;
        for(auto matmecanico : matmecanicos){
        cout << "Nome: " << matmecanico->getNome_Material() << endl;
        cout << "ID: " << matmecanico->getId_Material() << endl;
        cout << "Preco: " << matmecanico->getPreco() << endl;
        cout << "Ip_protec: " << matmecanico->getIp_protec() << endl;
        cout << "Peso: " << matmecanico->getPeso() << endl;
        cout << endl;
        }


        //adicionar e retirar materiais elétricos
         cout << "Adicionando e retirando materiais elétricos..." << endl;

        elec1->colocarMaterial(*disj1, 2);
        cout << disj1->getQuantidade() << endl;

      /* elec1->colocarMaterial(*motor1, 1);
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
*/

    return 0;
}
