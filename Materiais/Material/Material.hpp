#ifndef MATERIAL
#define MATERIAL

#include <string>

using std::string;

class Material{
    protected: 
    string nomeMaterial;
    int idMaterial;
    double preco;

    public:
    Material();
    Material(string nomeMaterial, int idMaterial, double preco);    //Construtor padrão

    string getNome_Material(); 
    void setNome_Material(string new_nome);
    int getId_Material();
    void setId(int new_id);
    double getPreco();
    void setPreco(double new_preco);

    ~Material();    //Destrutor
};

#endif