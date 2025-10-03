#include <stdio.h>

float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float multi(float a, float b)
{
    return a * b;
}

float divi(float a, float b)
{
    if (!b)
    {
        fprintf(stderr, "Error, division por cero");
        return 0;
    }
    return a / b;
}

int main(void)
{
    float (*pFunc[4])(float aa, float bb) = {suma, resta, multi, divi};

    float a, b, res;
    int opcion;
    printf("Ingrese primer valor\n");
    scanf("%f", &a);

    printf("Ingrese segundo valor\n");
    scanf("%f", &b);

    printf("Seleccione una operación:\n");
    printf("0. Suma\n1. Resta\n2. Multiplicación\n3. División\n:");
    scanf("%d", &opcion);
    if(opcion>3 || opcion < 0)
    {return 1;}

    res = pFunc[opcion](a, b);

    printf("%f\n", res);
}