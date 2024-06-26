#define CATCH_CONFIG_MAIN  // Isso diz ao Catch para fornecer um main() - faça isso apenas em um arquivo .cpp
#include "Catch.hpp"
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

TEST_CASE("Criação de Funcionário Elétrico") {
    FuncEletrico* elec1 = new FuncEletrico("Guido", 103, "Eletricista");

    REQUIRE(elec1->getNome_Funcionario() == "Guido");
    REQUIRE(elec1->getId_Funcionario() == 101);
    REQUIRE(elec1->getFuncao_Funcionario() == "Eletricista");
}

TEST_CASE("Criação de Funcionário Mecânico") {
    FuncMecanico* mec1 = new FuncMecanico("Barbara", 102, "Mecânica");

    REQUIRE(mec1->getNome_Funcionario() == "Barbara");
    REQUIRE(mec1->getId_Funcionario() == 102);
    REQUIRE(mec1->getFuncao_Funcionario() == "Mecânica");
}

//string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente
 
TEST_CASE("Adição e Retirada de Disjuntor") {
    Disjuntor* disj1 = new Disjuntor("Disjuntor Tipo A", 201, 50.0, 100, "IP20", 220, 10);
    FuncEletrico* elec1 = new FuncEletrico("Guido", 101, "Eletricista");

    elec1->colocarMaterial(disj1, 10);
    REQUIRE(disj1->getQuantidade() == 110);

    elec1->retirarMaterial(disj1, 20);
    REQUIRE(disj1->getQuantidade() == 90);
}


TEST_CASE("Adição e Retirada de Motor") {
    Motor* motor1 = new Motor("Motor Tipo B", 202, 150.0, 50, "IP44", 220, 15);
    FuncEletrico* elec1 = new FuncEletrico("Guido", 101, "Eletricista");

    elec1->colocarMaterial(motor1, 5);
    REQUIRE(motor1->getQuantidade() == 55);

    elec1->retirarMaterial(motor1, 10);
    REQUIRE(motor1->getQuantidade() == 45);
}

TEST_CASE("Adição e Retirada de Rele") {
    Rele* rele1 = new Rele("Rele Tipo C", 203, 20.0, 200, "IP20", 220, 5);
    FuncEletrico* elec1 = new FuncEletrico("Guido", 101, "Eletricista");

    elec1->colocarMaterial(rele1, 20);
    REQUIRE(rele1->getQuantidade() == 220);

    elec1->retirarMaterial(rele1, 30);
    REQUIRE(rele1->getQuantidade() == 190);
}

TEST_CASE("Adição e Retirada de Eixo") {
    Eixo* eixo1 = new Eixo("Eixo Tipo D", 301, 30.0, 75, "IP20", 5.0);
    FuncMecanico* mec1 = new FuncMecanico("Barbara", 102, "Mecânica");

    mec1->colocarMaterial(eixo1, 20);
    REQUIRE(eixo1->getQuantidade() == 95);

    mec1->retirarMaterial(eixo1, 30);
    REQUIRE(eixo1->getQuantidade() == 65);
}

TEST_CASE("Adição e Retirada de Parafuso") {
    Parafuso* parafuso1 = new Parafuso("Parafuso Tipo E", 302, 0.5, 500, "IP20", 0.1);
    FuncMecanico* mec1 = new FuncMecanico("Barbara", 102, "Mecânica");

    mec1->colocarMaterial(parafuso1, 100);
    REQUIRE(parafuso1->getQuantidade() == 600);

    mec1->retirarMaterial(parafuso1, 150);
    REQUIRE(parafuso1->getQuantidade() == 450);
}

TEST_CASE("Adição e Retirada de Porca") {
    Porca* porca1 = new Porca("Porca Tipo F", 303, 0.2, 300, "IP20", 0.05);
    FuncMecanico* mec1 = new FuncMecanico("Barbara", 102, "Mecânica");

    mec1->colocarMaterial(porca1, 100);
    REQUIRE(porca1->getQuantidade() == 400);

    mec1->retirarMaterial(porca1, 50);
    REQUIRE(porca1->getQuantidade() == 350);
}


