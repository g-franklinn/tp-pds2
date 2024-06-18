#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include "Rele.hpp"
#include <iostream>
#include <string>

using namespace std;

Rele::Rele(){};

Rele::Rele(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, int tensao, int corrente)
: MatEletrico() {};

void Rele::adicionarRele(Rele rele, int quant){
    rele.quantidade += quant;
};

void Rele::retirarRele(Rele rele, int quant){
    if (rele.quantidade < quant){
        cout<<"Não é possível retirar. Em estoque = " << rele.quantidade<< endl;
    }
    else
        rele.quantidade -= quant;
};

Rele::~Rele(){
    cout<< "Deletando Rele"<<endl;
};
