#include "../Material/Material.hpp"
#include "MatMecanico.hpp"
#include <iostream>

class Eixo : public MatMecanico{
    public:
        int quantidade;
        Eixo();
        Eixo(string nome, int id, double preco, string ip_protec, double peso, int quantidade);
        void adicionarEixo(Eixo eixo, int q);
        void retirarEixo(Eixo eixo, int q);
        ~Eixo();

};