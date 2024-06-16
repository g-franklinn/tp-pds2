#include "../Material/Material.hpp"
#include "MatMecanico.hpp"
#include <iostream>

using namespace std;

MatMecanico::MatMecanico(){};
MatMecanico::MatMecanico(string nome, int id, double preco, string ip_protec, double peso)
    : Material(nomeMaterial, idMaterial,preco), ip_protec(ip_protec), peso(peso) {};

MatMecanico::~MatMecanico(){
    cout << "Destruindo material mecanico" << endl;
}

