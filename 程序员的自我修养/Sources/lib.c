/* lib.c */
#include <stdio.h>

void foobar(int i)
{
    printf("Printing from lib.so %d", i);
    sleep(-1);
}