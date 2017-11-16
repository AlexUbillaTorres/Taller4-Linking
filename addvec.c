#include "vector.h"

vector addvec(vector c, vector d) 
{
   vector z;
   
   z.x=c.x+d.x;
   z.y=c.y+d.y;
   
   return z;
}
