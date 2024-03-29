#ifndef __TRIANGULO_H
#define __TRIANGULO_H

using namespace std;

class Triangulos {
    private:
        int lado1, lado2, hipotenusa;

    public:
        Triangulos(int lado1, int lado2);
        Triangulos(int lado1, int lado2, int hipotenusa);

        int getHipotenusa();
        int getPerimetro();
        int getArea();
        
        static int Comparar(int area1, int area2);
};

#endif