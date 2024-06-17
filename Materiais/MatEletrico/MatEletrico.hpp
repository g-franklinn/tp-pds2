#ifndef MATELETRICO
#define MATELETRICO

#include "../Material/Material.hpp"
#include <string>

using std::string;

class MatEletrico : public Material{
    private:
        int tensao;
        int corrente;
        
    public:
        MatEletrico();
        MatEletrico(string nome, int id, double preco, string ip_protec,int tensao, int corrente); //Construtor Padrão
        ~MatEletrico(); //Destrutor
};

#endif