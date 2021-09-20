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

int Triangulos::getPerimetro() {
    int perimetro = lado1 + lado2 + Triangulos::getHipotenusa();
    return perimetro;
}

int Triangulos::getArea() {
    int area = (lado1 * lado2)/2;
    return area;
}