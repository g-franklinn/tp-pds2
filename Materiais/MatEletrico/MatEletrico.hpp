#ifndef MATELETRICO
#define MATELETRICO

#include "../Material/Material.hpp"
#include "../MatEstoque/MatEstoque.hpp"
#include <string>

using std::string;

class MatEletrico : public MatEstoque{
    protected:
        int tensao;
        int corrente;
        string ip_protec;
        
    public:
        MatEletrico();
        MatEletrico(string nomeMaterial, int idMaterial, double preco, string ip_protec, int tensao, int corrente, int quantidade); //Construtor Padrão

        string getIp_protec();
        void setIp_protec(string new_ip_protec);
        int getTensao();
        void setTensao(int new_tensao);
        int getCorrente();
        void setCorrente(int new_corrente);
        int getQuantidade() override;

        ~MatEletrico(); //Destrutor
};

#endif