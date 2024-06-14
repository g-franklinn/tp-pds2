#include "../Funcionarios.hpp"
#include "../../Materiais/Material/Material.hpp"
#include "../../Materiais/MatMecanico/MatMecanico.hpp"
#include "../../Materiais/MatMecanico/Parafuso/Parafuso.hpp"
#include "../../Materiais/MatMecanico/Porca/Porca.hpp"
#include "../../Materiais/MatMecanico/MatMecanico.hpp"
#include "FuncMecanico.hpp"
#include <iostream>


#include <string> 

using namespace std; 

FuncMecanico::FuncMecanico(string nome, int id, string funcao) 
    : Funcionarios(nomeFuncionario, idFuncionario, funcaoFuncionario){}

void FuncMecanico::colocarMaterial(){
        int opcao;

    cout << "Escolha uma opção: 1- Parafuso, 2- Porca, 3- Eixo";
    cin >> opcao;

    switch(opcao) {
        case 1:
            int quantidade;
            cout << "Quantos parafusos?" << endl;
            cin >> quantidade;
            Parafuso material;
            material.quantidade += quantidade;
            break;
        case 2:
            cout << "Você escolheu a opção 2." << endl;
            break;
        case 3:
            cout << "Você escolheu a opção 3." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
    }

}