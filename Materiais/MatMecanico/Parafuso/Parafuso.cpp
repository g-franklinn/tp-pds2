#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatMecanico.hpp"
#include "Parafuso.hpp"
#include <iostream>

using namespace std;

Parafuso::Parafuso(){

};
Parafuso::Parafuso(string nomeMaterial, int idMaterial, double preco, int quantidade, string ip_protec, double peso)
 : MatMecanico() {
    this->nomeMaterial = nomeMaterial;
    this->idMaterial = idMaterial;
    this->preco = preco;
    this->quantidade = quantidade;
    this->ip_protec = ip_protec;
    this->peso = peso;
 };


void Parafuso:: adicionarParafuso(Parafuso parafuso, int q){
    parafuso.quantidade += q;

};

void Parafuso:: retirarParafuso(Parafuso parafuso, int q){
    if (parafuso.quantidade < q){
        cout<<"Não é possível retirar. Em estoque = " << parafuso.quantidade<< endl;
    }
    else{
    parafuso.quantidade -= q;}



};

Parafuso::~Parafuso(){
    cout<< "Deletando Parafuso"<<endl;
};
