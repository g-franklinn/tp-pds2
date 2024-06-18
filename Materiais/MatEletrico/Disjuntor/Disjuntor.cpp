<<<<<<< HEAD
#include "../../Material/Material.hpp"
#include "../MatEletrico.hpp"
#include "Disjuntor.hpp"
#include <iostream>
using namespace std;

Disjuntor::Disjuntor(){
};

Disjuntor::Disjuntor(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade):
    MatEletrico(nome, id, preco, ip_protec, tensao, corrente), quantidade(quantidade){
};

void Disjuntor::adicionarDisjuntor(Disjuntor disjuntor, int quant){
    disjuntor.quantidade += quant;
};

void Disjuntor::retirarDisjuntor(Disjuntor disjuntor, int quant){
    if (disjuntor.quantidade < quant){
        cout<<"Não é possível retirar. Em estoque = " << disjuntor.quantidade<< endl;
    }
    else
        disjuntor.quantidade -= quant;
};

Disjuntor::~Disjuntor(){
    cout<< "Deletando Disjuntor"<<endl;
};
=======
#include "../../Material/Material.hpp"
#include "../../MatEstoque/MatEstoque.hpp"
#include "../MatEletrico.hpp"
#include "Disjuntor.hpp"
#include <iostream>
using namespace std;

Disjuntor::Disjuntor(){
};

Disjuntor::Disjuntor(string nome, int id, double preco, string ip_protec, int tensao, int corrente, int quantidade):
    MatEletrico(nome, id, preco, ip_protec, tensao, corrente),quantidade(quantidade){
};

void Disjuntor::adicionarDisjuntor(Disjuntor disjuntor, int quant){
    disjuntor.quantidade += quant;
};

void Disjuntor::retirarDisjuntor(Disjuntor disjuntor, int quant){
    if (disjuntor.quantidade < quant){
        cout<<"Não é possível retirar. Em estoque = " << disjuntor.quantidade<< endl;
    }
    else
        disjuntor.quantidade -= quant;
};

Disjuntor::~Disjuntor(){
    cout<< "Deletando Disjuntor"<<endl;
};
>>>>>>> 8f7d047f4e0f4bc1c6032791612a9f52e4628514
