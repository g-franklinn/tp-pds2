#include "../Material/Material.hpp"
#include "MatEstoque.hpp"
#include "iostream"

using namespace std;

MatEstoque::MatEstoque(int quantidade, int id, string nome) : Material(nome, id, 0.0), quantidade(quantidade), idLocal(id), nomeLocal(nome) {}


int MatEstoque::getQuantidade(){
    return quantidade;
}

string MatEstoque::getLocal() {
    return nomeLocal;
}

void MatEstoque::baixaEstoque(int quantidade) {
    if (this->quantidade >= quantidade) {
        this->quantidade -= quantidade;
    }
}


void MatEstoque::adicionar(int quantidade) {
    this->quantidade += quantidade;
}

void MatEstoque::setLocal(int id, const string& nome) {
    idLocal = id;
    nomeLocal = nome;
}

MatEstoque::~MatEstoque() {};