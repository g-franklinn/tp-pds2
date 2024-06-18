#ifndef MATESTOQUE
#define MATESTOQUE

#include <string>
#include "../Material/Material.hpp"

using std::string;

class MatEstoque: public Material{
    private:
        int quantidade;
        int idLocal;
        string nomeLocal;

    public:
        MatEstoque(int quantidade, int id, string nome);   //Construtor padrão

        int getQuantidade();
        string getLocal();
        void baixaEstoque(int quantidade);
        void adicionar(int quantidade);
        void setLocal(int id, string nome);

        virtual ~MatEstoque();         // Destrutor
};

#endif