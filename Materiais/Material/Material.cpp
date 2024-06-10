#include "Material.hpp" 
#include <string>

using std::string;

Material::Material(string nome, int id, double preco)
    : nomeMaterial(nome), idMaterial(id), preco (preco) {}

string Material::getNome_Material(){
    return nomeMaterial;
}

void Material::setNome_Material(const string& nome){
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

Material::~Material() {};

