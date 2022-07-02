#include <stdio.h>
#define PI 3.14

float area(float *raio);
float perimetro(float *raio);

int main(int argc, char const *argv[]) {

        float raio;
        float per, are;

        scanf("%f", &raio);

        per = area(&raio);
        are = perimetro(&raio);

        printf("Perimetro: %.2f\n", per);
        printf("Área: %.2f\n", are);

        return 0;
}

float perimetro(float *raio) {

        float resul;

        resul = 2 * PI * *raio;

        return resul;
}

float area(float *raio) {

        float resul;

        resul = PI * *raio * *raio;

        return resul;
}
