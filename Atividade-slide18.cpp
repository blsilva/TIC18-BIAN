#include <iostream>
using namespace std;



int main(){
    double x, y, z, fx;
    cout << "Digite o valor de x: "; 
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    fx = (5 * x) + 2;

    cout << ((y == fx) ? "Esta na curva" : "") <<endl;
    cout << ((y < fx) ? "Esta do lado direito" : "") <<endl;
    cout << ((y > fx) ? "Esta do lado esquedo" : "") <<endl;
    return 0;
}
