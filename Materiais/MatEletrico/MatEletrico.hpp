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
        MatEletrico(string nome, int id, double preco, int tensao, int corrente); //Construtor
        ~MatEletrico(); //Destrutor
};

#endif