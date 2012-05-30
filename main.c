#include <stdio.h>
#include "fib.h"

int
main()
{
    int n = 3;
    int ret = 0;

    ret = fib( n );
    printf("ret:%d\n", ret );

    return 0;
}
