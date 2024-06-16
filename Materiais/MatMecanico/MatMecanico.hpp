#ifndef MATMECANICO
#define MATMECANICO

#include "../Material/Material.hpp"
#include <string>

using std::string;

class MatMecanico : public Material{
    protected:
        string ip_protec;
        double peso;
        
    public:
        MatMecanico();
        MatMecanico(string nome, int id, double preco, string ip_protec, double peso); //Construtor
        ~MatMecanico(); //Destrutor
};

#endif