#include <stdio.h>

int main(void)
{
    int aux;

    int lista[9] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

    for (int vezes = 0; vezes <= 8; vezes++)
    {

        for (int i = 0; i < 9; i++)
        {
            if (lista[i] > lista[i + 1])
            {
                aux = lista[i];
                lista[i] = lista[i + 1];
                lista[i + 1] = aux;
            }
        }
    }

    for (int j = 0; j < 9; j++)
    {
        printf("%d\n", lista[j]);
    }

    return 0;
}