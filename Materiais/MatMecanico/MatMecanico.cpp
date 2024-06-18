#include "../Material/Material.hpp"
#include "../MatEstoque/MatEstoque.hpp"
#include "MatMecanico.hpp"
#include <iostream>
#include <string>

using namespace std;

MatMecanico::MatMecanico(){};

MatMecanico::MatMecanico(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso)
 : Material(nomeMaterial, idMaterial, preco, quantidade), ip_protec(ip_protec), peso(peso) {};

string MatMecanico::getIp_protec(){
    return ip_protec;
}

void MatMecanico::setIp_protec(string new_ip_protec){
    ip_protec = new_ip_protec;
}

double MatMecanico::getPeso(){
    return peso;
}

void MatMecanico::setPeso(double new_peso){
    peso = new_peso;
}

int MatMecanico::getQuantidade(){
    return quantidade;
}

MatMecanico::~MatMecanico(){
    cout << "Destruindo material mecanico" << endl;
}

