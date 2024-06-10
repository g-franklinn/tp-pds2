#ifndef MATERIAL
#define MATERIAL

#include <string>

using std::string;

class Material{
    private: 
    string nomeMaterial;
    int idMaterial;
    double preco;

    public:
    Material(string nome, int id, double preco);    //Construtor padrão

    string getNome_Material(); 
    string setNome_Material();
    int getId();
    int setId();
    double getPreco();
    double setPreco();

    virtual ~Material();    //Destrutor
};

#endif