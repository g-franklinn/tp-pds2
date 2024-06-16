#include "../Material/Material.hpp"
#include "MatMecanico.hpp"
#include <iostream>

class Parafuso : public MatMecanico{
    public:
        int quantidade;
        Parafuso();
        Parafuso(string nome, int id, double preco, string ip_protec, double peso, int quantidade);
        void adicionarParafuso(Parafuso parafuso, int q);
        void retirarParafuso(Parafuso parafuso, int q);
        ~Parafuso();
};