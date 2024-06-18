#include "../Material/Material.hpp"
#include "MatMecanico.hpp"
#include <iostream>
#include <string>

using namespace std;

MatMecanico::MatMecanico(){};

MatMecanico::MatMecanico(string nomeMaterial, int idMaterial, double preco, string ip_protec, double peso)
    : Material(nomeMaterial, idMaterial, preco), ip_protec(ip_protec), peso(peso) {};

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

MatMecanico::~MatMecanico(){
    cout << "Destruindo material mecanico" << endl;
}

