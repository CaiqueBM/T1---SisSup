#include <iostream>
#include "triangulo.h"

int main() {
  std::cout << "Hello World!\n";
    int l1, l2, h, control;

    
    cout << "Escolha a opção:" << endl;
    cout << "1 - Encontrar a hipotenusa" << endl;
    cout << "2 - Achar area e perimetro" << endl;
    cout << "3 - Comparar dois triangulos" << endl;
    cout << "Opção: ";
    cin >> control;

    if (control == 1) {
   cout << "Utilizando apenas 2 lados" << endl;
   cout << "Digite o lado 1: ";
    cin >> l1;
    cout << "Digite o lado 2: ";
    cin >> l2;
    //cout << "Digite o nome do objeto: ";
    //cin >> x;

    Triangulos x(l1, l2);
        std::cout << x.getHipotenusa() << " m" << endl;
    } else if (control == 2) {

    cout << "Utilizando os 2 lados e a hipotenusa" << endl;
    cout << "Digite o lado 1: ";
    cin >> l1;
    cout << "Digite o lado 2: ";
    cin >> l2;
    cout << "Digite a hipotenusa: ";
    cin >> h;
    //cout << "Digite o nome do objeto: ";
    //cin >> x;

    Triangulos j(l1,l2,h);
    
    std::cout << j.getPerimetro() << " m" <<endl;
    std::cout << j.getArea() << " m²" << endl;

    } else if (control == 3) {

    }
 
    //Triangulos x(3,4);
    //Triangulos j(3,4,5);
    











}