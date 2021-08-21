#include <stdio.h>

float calcula_area(float l1, float l2)
{
    float area;
    area = l1 * l2;
    return area;
}


int main()
{
    float lado1, lado2, area;

    printf("Por favor escreva o primeiro lado:\n");
    scanf("%f", &lado1);
    printf("Por favor escreva o segundo lado:\n");
    scanf("%f", &lado2);

    area = calcula_area(lado1, lado2);

    printf("A Area e %f\n", area);

    if(area>10)
        printf("A Area e maior que 10m2\n");
    else   
        printf("A Area e menor que 10m2\n");

}
