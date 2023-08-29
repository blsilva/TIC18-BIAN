#include <iostream>
using namespace std;

int main(){
    int cont = 0;
    int notaAluno, 
    double Nota = 0.0;
    while (cont <= 9){
      cout<<"Digite a nota dos Alunos: "<< endl;
      cin >>  notaAluno;
      Nota = Nota + notaAluno;
      cont++;
    }
    Nota = Nota / 10;
    cout << "A media da turma é : "<<Nota <<endl;
    return 0;
}