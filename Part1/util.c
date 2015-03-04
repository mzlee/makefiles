#include <stdio.h>
#include "util.h"

int
util_fn(int x)
{
   printf("%s\n", __func__);
   return 2 * x;
}
