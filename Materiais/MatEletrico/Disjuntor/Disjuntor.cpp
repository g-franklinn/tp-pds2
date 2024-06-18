#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include "Disjuntor.hpp"
#include <iostream>
using namespace std;

Disjuntor::Disjuntor(){
};

Disjuntor::Disjuntor(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente)
: MatEletrico() {};

void Disjuntor::adicionarDisjuntor(Disjuntor disjuntor, int quant){
    disjuntor.quantidade += quant;
};

void Disjuntor::retirarDisjuntor(Disjuntor disjuntor, int quant){
    if (disjuntor.quantidade < quant){
        cout<<"Não é possível retirar. Em estoque = " << disjuntor.quantidade<< endl;
    }
    else
        disjuntor.quantidade -= quant;
};

Disjuntor::~Disjuntor(){
    cout<< "Deletando Disjuntor"<<endl;
};
