#include "../Material/Material.hpp"
#include "MatEletrico.hpp"
#include "iostream"

using namespace std;

MatEletrico::MatEletrico(string nome, int id, double preco, int tensao, int corrente)
    : nomeMaterial(nome), idMaterial(id), preco(preco), tensao(tensao), corrente(corrente) {};

MatEletrico::~MatEletrico(){
    cout << "Destruindo material eletrico" << endl;
}

