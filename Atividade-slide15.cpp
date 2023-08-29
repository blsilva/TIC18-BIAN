#include <iostream>
using namespace std;

int a, b, c;

int main(){
    cout << "Digite o valor de a:"; 
    cin >> a;

    cout << "Digite o valor de b:";
    cin >> b;

    c = a + b;
    cout <<"resultado = "<< hex<< c <<endl;

    c = a * b;
    cout <<"resultado = "<< oct<< c <<endl;
    return 0
}

