#ifndef MATESTOQUE
#define MATESTOQUE

#include <string>
#include "../Material/Material.hpp"

using std::string;

class MatEstoque: public Material{
    public:
        MatEstoque();
        MatEstoque(string nomeMaterial,  int idMaterial, double preco, int quantidade);   //Construtor padrão

        void baixaEstoque(int quantidade);
        void adicionar(int quantidade);
        virtual int getQuantidade() override;

        virtual ~MatEstoque();         // Destrutor
};

#endif