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
 : MatMecanico() {};

void Eixo:: adicionarEixo(Eixo eixo, int q){
    eixo.quantidade += q;
};

void Eixo:: retirarEixo(Eixo eixo, int q){
    if (eixo.quantidade < q){
        cout<<"Não é possível retirar. Em estoque = " << eixo.quantidade<< endl;
    }
    else{
    eixo.quantidade -= q;}
};

Eixo::~Eixo(){
    cout<< "Deletando Eixo"<<endl;
};
