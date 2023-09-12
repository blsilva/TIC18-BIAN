#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Passagem {
    string data;
    string hora;
    string cpf;
    string nome;
    string assento;
    int idade;
    double valor = 80.0;
    bool destino;
};
int main (){
    vector <Passagem> vecp;
    Passagem p;
    
   // p[0].data;
        cout << "Digite a data no formato DD/MM/AAAA ";
        cin >> p.data;
        
    //p[0].assento;
        cout << "Digite o assento ";
        cin >> p.assento;

      vecp.push_back(p);
}

