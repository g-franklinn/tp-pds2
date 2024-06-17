#include <iostream>
#include <stdexcept> // Para usar as exceções padrão do C++
#include "Funcionarios/Funcionarios.hpp"
#include "Funcionarios/FuncEletrico.hpp"
#include "Funcionarios/FuncMecanico.hpp"
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
        FuncEletrico elec1("Guido", 101, "Eletricista");
        FuncMecanico mec1("Barbara", 102, "Mecânica");

        // Criação de materiais elétricos
        Disjuntor disj1("Disjuntor Tipo A", 201, 50.0, "IP20", 220, 10, 100);
        Motor motor1("Motor Tipo B", 202, 150.0, "IP44", 220, 15, 50);
        Rele rele1("Rele Tipo C", 203, 20.0, "IP20", 220, 5, 200);

        // Criação de materiais mecânicos
        Eixo eixo1("Eixo Tipo D", 301, 30.0, "IP20", 5.0, 75);
        Parafuso parafuso1("Parafuso Tipo E", 302, 0.5, "IP20", 0.1, 500);
        Porca porca1("Porca Tipo F", 303, 0.2, "IP20", 0.05, 300);

        // Exibição de informações dos funcionários
        cout << "Informações dos Funcionários:" << endl;

        cout << "Funcionário Elétrico: ";
        elec1.exibirInformacoes();
        cout << endl;

        cout << "Funcionário Mecânico: ";
        mec1.exibirInformacoes();
        cout << endl;

        // Teste de adicionar e retirar materiais elétricos
        cout << "Adicionando e retirando materiais elétricos..." << endl;

        elec1.colocarMaterial(disj1, 10);
        elec1.retirarMaterial(disj1, 5);

        elec1.colocarMaterial(motor1, 5);
        elec1.retirarMaterial(motor1, 2);

        elec1.colocarMaterial(rele1, 20);
        elec1.retirarMaterial(rele1, 10);

        // Teste de adicionar e retirar materiais mecânicos
        cout << "Adicionando e retirando materiais mecânicos..." << endl;

        mec1.colocarMaterial(eixo1, 20);
        mec1.retirarMaterial(eixo1, 10);

        mec1.colocarMaterial(parafuso1, 100);
        mec1.retirarMaterial(parafuso1, 50);

        mec1.colocarMaterial(porca1, 100);
        mec1.retirarMaterial(porca1, 50);

 
    return 0;
}
