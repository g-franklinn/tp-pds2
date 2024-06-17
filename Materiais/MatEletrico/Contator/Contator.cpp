#include "../Material/Material.hpp"
#include "MatEletrico.hpp"
#include "Contator.hpp"
#include <iostream>
using namespace std;

Contator::Contator(){
};

Contator::Contator(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade):
    MatEletrico(nome, id, preco, ip_protec, tensao, corrente), quantidade(quantidade){
};

void Contator::adicionarContator(Contator contator, int quant){
    contator.quantidade += quant;
};

void Contator::retirarContator(Contator contator, int quant){
    if (contator.quantidade < quant){
        cout<<"Não é possível retirar. Em estoque = " << contator.quantidade<< endl;
    }
    else
        contator.quantidade -= quant;
};

Contator::~Contator(){
    cout<< "Deletando Contator"<<endl;
};
