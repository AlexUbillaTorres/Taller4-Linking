/* addvec.c */
/* $begin addvec */
#include "vector.h"

void addvec(vector c, vector d,
	    vector z) 
{
   z.x=c.x+d.x;
   z.y=c.y+d.y;
}
/* $end addvec */

