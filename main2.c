#include <stdio.h>
#include "vector.h"

int main()
{
vector v1;
vector v2;
vector z;
vector a;

    printf("Ingrese x para vector1: ");
    scanf("%d",&v1.x);
    printf("Ingrese y para vector1: ");
    scanf("%d",&v1.y);
    printf("Ingrese x para vector2: ");
    scanf("%d",&v2.x);
    printf("Ingrese y para vector2: ");
    scanf("%d",&v2.y);
    addvec(v1, v2, z);
    multvec(v1, v2, a);
    printf("z = [%d %d]\n", z.x, z.y);
    printf("a = [%d %d]\n", a.x, a.y);

    return 0;
}


