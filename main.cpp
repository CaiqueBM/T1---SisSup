#include <iostream>
#include "triangulo.h"

using namespace std;

int main() {
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

        Triangulos j(l1,l2,h);
        
        std::cout << j.getPerimetro() << " m" <<endl;
        std::cout << j.getArea() << " m²" << endl;

    } else if (control == 3) {
        int area1, area2, aux;

        for (int i=0;i < 2; i++) {
            cout << "------- Triangulo " << i+1 << " -------" << endl;
            cout << "Digite o lado 1: ";
            cin >> l1;
            cout << "Digite o lado 2: ";
            cin >> l2;

            aux = (l1 *l2)/2;
            cout << aux<< endl;

            if (i == 0){
                Triangulos j(l1,l2);
                area1 = j.getArea();
                cout << "A area do triangulo " << i+1 << " é: " << area1 << endl;
            } else {
                Triangulos j(l1,l2);
                area2 = j.getArea();
                cout << "A area do triangulo " << i+1 << " é: " << area2 << endl;
            }
        }
        std::cout << Triangulos::Comparar(area1, area2) << endl;

    }
 




}