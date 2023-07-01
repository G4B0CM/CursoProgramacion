#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    };
    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Introduce el nombre del jugador %d\n", i + 1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugador %d\n", i + 1);
        scanf("%d", &jugadores[i].edad);
        printf("Introduce la altura del jugador %d\n", i + 1);
        scanf("%f", &jugadores[i].altura);
        fflush(stdin);
    }
    int ops = -1;
    while (ops)
    {
        printf("Introduce la opcion que deseas realizar:\n");
        printf("1) Lista jugador\n2) Buscar Jugador\n3) Jugador mas alto\n0) Salir\n");
        scanf("%d", &ops);
        fflush(stdin);
        switch (ops)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Nombre: %s\n", jugadores[i].nombre);
                printf("Altura: %.2f\n", jugadores[i].altura);
            }
            break;
        case 2:
            char nombre_jugador[50];
            printf("Ingrese el nombre a buscar: \n");
            gets(nombre_jugador);
            int encontrado = 0;
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i].nombre, nombre_jugador) == 0)
                {
                    encontrado = 1;
                    printf("Edad: %d\nAltura: %.2f\n", jugadores[i].edad, jugadores[i].altura);
                }
            }
            if (encontrado == 0)
                printf("Jugador no encontrado\n");
            break;
        case 3:
            float mayor = jugadores[0].altura;
            char nombre_mayor[50];
            int edad_mayor = jugadores[0].edad;
            strcpy(nombre_mayor, jugadores[0].nombre);
            for (int i = 1; i < 5; i++)
            {
                if (jugadores[i].altura > mayor)
                {
                    strcpy(nombre_mayor, jugadores[i].nombre);
                    edad_mayor = jugadores[i].edad;
                    mayor = jugadores[i].altura;
                }
            }
            printf("El mas alto: %s con %i años y una altura de %.2f\n", nombre_mayor, edad_mayor, mayor);
            break;
        default:
            ops = 0;
            break;
        }
    }
}