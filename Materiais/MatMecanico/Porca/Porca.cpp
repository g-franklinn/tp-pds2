#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include "Porca.hpp"
#include <iostream>

using namespace std;

Porca::Porca(){}

Porca::Porca(string nome, int id, double preco, int quantidade, string ip_protec, double peso) 
 : MatMecanico() {};

void Porca::adicionarPorca(Porca porca, int q){
    porca.quantidade += q;

};

void Porca::retirarPorca(Porca porca, int q){
    if (porca.quantidade < q){
        cout<<"Não é possível retirar. Em estoque = " << porca.quantidade<< endl;
    }
    else{
    porca.quantidade -= q;}
};

Porca::~Porca(){
    cout<< "Deletando porca"<<endl;
};
