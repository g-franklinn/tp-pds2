#ifndef MATMECANICO
#define MATMECANICO

#include "../Material/Material.hpp"
#include <string>

using std::string;

class MatMecanico : public Material{
    private:
        string ip_protec;
        double peso;
        
    public:
        MatMecanico(string nome, int id, double preco, string ip_protec, double peso); //Construtor
        ~MatMecanico(); //Destrutor
};

#endif