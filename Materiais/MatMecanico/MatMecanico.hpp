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
        MatMecanico(string nomeMaterial, int idMaterial, double preco, string ip_protec, double peso); //Construtor

        string getIp_protec();
        void setIp_protec(string new_ip_protec);
        double getPeso();
        void setPeso(double new_peso);

        ~MatMecanico(); //Destrutor
};

#endif