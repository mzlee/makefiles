#include <stdio.h>
#include "util.h"

int
main()
{
   int x, y;
   printf("%s\n", __func__);
   x = 10;
   y = util_fn(x);
   printf("util_fn(%d) => %d\n", x, y);

   return 0;
}
