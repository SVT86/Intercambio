#include <stdio.h>

#define MAX_ELEMENTOS 10

void mostrarArreglo(int arreglo[], int ce)
{

    //    int len = sizeof(arreglo) / sizeof(arreglo[0]);

    for (int i = 0; i < ce; i++)
        printf(" [%i] ", arreglo[i]);
    printf("\n");
}

int main(int argc, char **argv)
{

    int i, j, aux = 0;

    int arreglo[MAX_ELEMENTOS] = {1, 224, 61, 7, 22, 89, 54, 9, 120, 44};

    puts("SIN ORDEN:");
    mostrarArreglo(arreglo, MAX_ELEMENTOS);

    for (j = 0; j < MAX_ELEMENTOS; j++)
        for (i = 0; i < MAX_ELEMENTOS; i++)
            if (arreglo[i] > arreglo[i + 1])
            {
                aux = arreglo[i];
                arreglo[i] = arreglo[i + 1];
                arreglo[i + 1] = aux;
            }
    puts("CON ORDEN:");
    mostrarArreglo(arreglo, MAX_ELEMENTOS);
    return 0;
}