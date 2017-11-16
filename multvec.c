#include "vector.h"

vector multvec(vector c, vector d) 
{
    vector a;
    
    a.x=c.x*d.x;
    a.y=c.y*d.y;
    
    return a;
}
