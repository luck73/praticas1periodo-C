#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x > y && x > z && y > z)
    {

        printf("menor: %d\n intermediario: %d\n maior: %d\n", z, y, x);
    }
    if (x > z && x > y && z > y)
    {

        printf("menor: %d\n intermediario: %d\n maior: %d\n", y, z, x);
    }
    if (y > x && y > z && x > z)
    {

        printf("menor: %d\n intermediario: %d\n maior: %d\n", z, x, y);
    }
    if (y > z && y > x && z > x)
    {

        printf("menor: %d\n intermediario: %d\n maior: %d\n", x, z, y);
    }
    if (z > x && z > y && x > y)
    {

        printf("menor: %d\n intermediario: %d\n maior: %d\n", y, x, z);
    }
    if (z > y && z > x && y > x)
    {

        printf("menor: %d\n intermediario: %d\n maior: %d\n", x, y, z);
    }
    if (x > y && x > z && y == z)
    {

        printf("menores: %d, %d\n maior: %d\n", z, y, x);
    }
    if (y > x && y > z && x == z)
    {

        printf("menores: %d, %d\n maior: %d\n", z, x, y);
    }
    if (z > x && z > y && x == y)
    {

        printf("menores: %d, %d\n maior: %d\n", y, x, z);
    }
    if (x > y && x == z)
    {

        printf("menor: %d\n maiores: %d, %d\n", y, z, x);
    }
    if (y > x && y == z)
    {

        printf("menor: %d\n maiores: %d, %d\n", x, z, y);
    }
    if (x > z && x == y)
    {

        printf("menor: %d\n maiores: %d, %d\n", z, x, y);
    }
    if (z == x && z == y && y == x)
    {
        printf("Todos numeros iguais.\n");
    }

    return 0;
}