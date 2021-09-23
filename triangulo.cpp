#include "triangulo.h"
#include <math.h>

using namespace std;

Triangulos::Triangulos(int a, int b){
    lado1 = a;
    lado2 = b;
}

int Triangulos::getHipotenusa() {
    int h = sqrt((lado1 * lado1)+(lado2 * lado2));
    return h;
}

Triangulos::Triangulos(int a, int b, int c) {
    lado1 = a;
    lado2 = b;
    hipotenusa = c;
}

int Triangulos::getPerimetro() {
    int perimetro = lado1 + lado2 + hipotenusa;
    return perimetro;
}

int Triangulos::getArea() {
    int area = (lado1 * lado2)/2;
    return area;
}