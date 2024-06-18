#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include "Eixo.hpp"
#include <iostream>
#include <string>
using namespace std;

Eixo::Eixo(){
};

Eixo::Eixo(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso)
 : MatMecanico() {
    this->nomeMaterial = nomeMaterial;
    this->idMaterial = idMaterial;
    this->preco = preco;
    this->quantidade = quantidade;
    this->ip_protec = ip_protec;
    this->peso = peso;
 };

void Eixo::adicionarEixo(Eixo* eixo, int q){
    eixo->quantidade += q;
};

void Eixo::retirarEixo(Eixo* eixo, int q){
    if (eixo->quantidade < q) {
        throw "Nao e possível retirar eixos. Em estoque = "; 
        cout << eixo->quantidade;
    }
    else 
        eixo->quantidade -= q;
};

Eixo::~Eixo(){
    cout<< "Deletando Eixo"<<endl;
};
