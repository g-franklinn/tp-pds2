#include "Material.hpp" 
#include <string>
#include <iostream>
using namespace std;



Material::Material(){};

Material::Material(string nome, int id, double preco)
    : nomeMaterial(nomeMaterial), idMaterial(idMaterial), preco(preco) {}

string Material::getNome_Material(){
    return nomeMaterial;
}

void Material::setNome_Material(string nome){
    nomeMaterial = nome;
}

int Material::getId(){
    return idMaterial;
}

void Material::setId(int id){
    idMaterial = id;
}

double Material::getPreco(){
    return preco;
}

void Material::setPreco(double preco){
    this -> preco = preco;
}

Material::~Material() {
    cout<<"Deletando material"<<endl;
};

