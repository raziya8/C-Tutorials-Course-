#include <stdio.h>
int main ()
{
    label:

    printf("We are inside label \n");
    goto end:
    printf("Hello world\n");
    return 0;

}