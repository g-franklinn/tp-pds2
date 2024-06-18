#include "../../Material/Material.hpp"
#include "../MatMecanico.hpp"
#include "Parafuso.hpp"
#include <iostream>

using namespace std;

Parafuso::Parafuso(){

};
Parafuso::Parafuso(string nome, int id, double preco, string ip_protec, double peso, int quantidade):
    MatMecanico(nome, id, preco, ip_protec, peso), quantidade(quantidade){
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
