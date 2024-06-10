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
    void setNome_Material(const string& nome);
    int getId();
    void setId(int id);
    double getPreco();
    void setPreco(double preco);

    virtual ~Material();    //Destrutor
};

#endif