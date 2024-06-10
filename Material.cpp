#include "Material.hpp" 
#include <string>

Material::Material(string nome, int id, double preco){}

string Material::getNome_Material(){
    return nomeMaterial;
}

int Material::getId(){
    return idMaterial;
}

double Material::getPreco(){
    return preco;
}

Material::~Material() {};