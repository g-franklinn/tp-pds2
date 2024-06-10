#ifndef MATESTOQUE
#define MATESTOQUE

#include <string>
#include "Material.hpp"

using std::string;

class MatEstoque: public Material{
    private:
        int quantidade;
        int idLocal;
        string nomeLocal;

    public:
        MatEstoque(int quantidade, int id, string nome);   //Construtor padrão

        int getQuantidade();
        getLocal();
        baixaEstoque();
        adicionar();
        setLocal();

        virtual ~MatEstoque();         // Destrutor
};

#endif