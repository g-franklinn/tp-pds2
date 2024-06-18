#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include "Porca.hpp"
#include <iostream>

using namespace std;

Porca::Porca(){}

Porca::Porca(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso) 
 : MatMecanico() {
    this->nomeMaterial = nomeMaterial;
    this->idMaterial = idMaterial;
    this->preco = preco;
    this->quantidade = quantidade;
    this->ip_protec = ip_protec;
    this->peso = peso;
 };

void Porca::adicionarPorca(Porca* porca, int q){
    porca->quantidade += q;

};

void Porca::retirarPorca(Porca* porca, int q){
    if (porca->quantidade < q) {
        throw "Nao e possível retirar porcas. Em estoque = "; 
        cout << porca->quantidade;
    }
    else 
        porca->quantidade -= q;
};

Porca::~Porca(){
    cout << "Deletando porca" <<endl;
};
