#include <iostream>
#include "triangulo.h"





int main() {
  std::cout << "Hello World!\n";
    int l1, l2;

   /* cout << "Digite o lado 1: ";
    cin >> l1;
    cout << "Digite o lado 1: ";
    cin >> l2;

    Triangulos x(l1, l2);
 */
    Triangulos x(3,4);
    
    std::cout << x.getHipotenusa() << endl;
    std::cout << x.getPerimetro() << endl;
}