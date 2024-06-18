#include "Material.hpp" 
#include <string>
#include <iostream>
using namespace std;

Material::Material(){};

Material::Material(string nomeMaterial, int idMaterial, double preco, int quantidade)
    : nomeMaterial(nomeMaterial), idMaterial(idMaterial), preco(preco), quantidade(quantidade) {}

string Material::getNome_Material(){
    return this->nomeMaterial;
}

void Material::setNome_Material(string new_nome){
    nomeMaterial = new_nome;
}

int Material::getId_Material(){
    return idMaterial;
}

void Material::setId(int new_id){
    idMaterial = new_id;
}

double Material::getPreco(){
    return preco;
}

void Material::setPreco(double new_preco){
    preco = new_preco;
}

int Material::getQuantidade(){
    return quantidade;
}

Material::~Material() {
    cout<<"Deletando material"<<endl;
};

