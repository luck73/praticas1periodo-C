#include <stdio.h>
int main ()
{
    int x, y, z;
    printf("Usuario, favor digitar os valores de x, y e z:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int r = (x * x * x) + (y * y) + (x * y * z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("r = %d\n", r);
    return 0;
}
