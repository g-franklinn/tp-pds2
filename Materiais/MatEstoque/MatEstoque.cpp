#include "../Material/Material.hpp"
#include "MatEstoque.hpp"
#include <iostream>

using namespace std;

MatEstoque::MatEstoque(){}

MatEstoque::MatEstoque(string nomeMaterial,  int idMaterial, double preco, int quantidade) 
: Material(nomeMaterial, idMaterial, preco, quantidade) {}

void MatEstoque::baixaEstoque(int quantidade) {
    if (this->quantidade >= quantidade) {
        this->quantidade -= quantidade;
    }
}

void MatEstoque::adicionar(int quantidade) {
    this->quantidade += quantidade;
}

int MatEstoque::getQuantidade(){
    return quantidade;
}

MatEstoque::~MatEstoque() {};