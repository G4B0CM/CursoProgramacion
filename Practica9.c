#include <stdio.h>

int main()

{
    int n, contador_aprobados = 0, contador_suspensos = 0;
    float nota;

    printf("Introduce el numero de alumnos\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Introduce la nota del alumno %d\n", i + 1);
        scanf("%f", &nota);
        if (nota >= 5)
        {
            contador_aprobados++;
        }
        else
        {
            contador_suspensos++;
        }
    }
    printf("El nimero de alumnos aprobados es: %d y el de alumnos suspensos es %d", contador_aprobados, contador_suspensos);
}