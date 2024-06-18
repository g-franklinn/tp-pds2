#include "../../Material/Material.hpp"
#include "../MatEletrico.hpp"
#include "Rele.hpp"
#include <iostream>
using namespace std;

Rele::Rele(){
};

Rele::Rele(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade):
    MatEletrico(nome, id, preco, ip_protec, tensao, corrente), quantidade(quantidade){
};

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
