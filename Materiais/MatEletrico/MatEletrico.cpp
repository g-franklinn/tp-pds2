#include "../Material/Material.hpp"
#include "../MatEstoque/MatEstoque.hpp"
#include "MatEletrico.hpp"
#include <iostream>

using namespace std;

MatEletrico::MatEletrico() {};

MatEletrico::MatEletrico(string nomeMaterial, int idMaterial, double preco, string ip_protec, int tensao, int corrente, int quantidade)
: MatEstoque(nomeMaterial, idMaterial, preco, quantidade), ip_protec(ip_protec), tensao(tensao), corrente(corrente) {};

string MatEletrico::getIp_protec(){
    return ip_protec;
}

void MatEletrico::setIp_protec(string new_ip_protec){
    ip_protec = new_ip_protec;
}

int MatEletrico::getTensao(){
    return tensao;
}

void MatEletrico::setTensao(int new_tensao){
    tensao = new_tensao;
}

int MatEletrico::getCorrente(){
    return corrente;
}

void MatEletrico::setCorrente(int new_corrente){
    corrente = new_corrente;
}

int MatEletrico::getQuantidade(){
    return quantidade;
}

MatEletrico::~MatEletrico(){
    cout << "Destruindo material eletrico" << endl;
}

