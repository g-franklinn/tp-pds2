#include "../Material/Material.hpp"
#include "MatEletrico.hpp"
#include "iostream"

using namespace std;

MatEletrico::MatEletrico(){};

MatEletrico::MatEletrico(string nome, int id, double preco, string ip_protec, int tensao, int corrente)
    : Material(nomeMaterial, idMaterial, preco), tensao(tensao), corrente(corrente) {};

MatEletrico::~MatEletrico(){
    cout << "Destruindo material eletrico" << endl;
}

