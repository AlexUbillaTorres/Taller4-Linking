#include "vector.h"

void multvec(vector c, vector d,
             vector a) 
{
    a.x=c.x*d.x;
    a.y=c.y*d.y;
  
    printf("a = [%d %d]\n", a.x, a.y);
}
