/* hand-coded implementation part of NatConv */
/* coding scheme version acc-2.1 */

/* Copyright 1989 - 1998 by the Opal Group, TU Berlin. All rights reserved 
   See OCSHOME/doc/LICENSE or
   http://projects.uebb.tu-berlin.de/opal/trac/wiki/License for details
   $Date$ ($Revision$)
*/
#include "Nat.h"
#include "Int.h"
#include "Real.h"
#include <string.h> //used for memset

/* maximum length of text representation of a natural number */
#define MAX_LEN_OF_NAT (10)


extern OBJ _ANatConv_Sq(OBJ x1) /* ` */
{OBJ r;
 NAT n = unpack_nat(x1);

 static char b[MAX_LEN_OF_NAT];
 char *p = b + 9; 

 memset(b, '\0', MAX_LEN_OF_NAT);
 if(n == 0)
   { *p-- = '0' ;}
 else
   { for(; n != 0; n = n /10)
       { *p-- = '0' + (n % 10); };
   }
 *p++;
 
 return make_denotation(p);
}


extern OBJ _ANatConv_AuncheckedAsChar(OBJ x1) /* uncheckedAsChar */
{OBJ r;
 ANatConv_AuncheckedAsChar(x1,r);
 return r;}


extern OBJ _ANatConv_AasInt(OBJ x1) /* asInt */
{ NAT imax = (NAT)unpack_int(__AInt_Amax);
  NAT cand = unpack_nat(x1);
  if (cand > imax) 
    HLT("asInt'NatConv: natural too large");
  return pack_int((INT)cand);
}

extern OBJ _ANatConv_AasReal(OBJ x1) /* asReal */
{ OBJ r;
  make_real((double)unpack_nat(x1),r);
  return r;
}

static init_const_ANatConv()
{}
