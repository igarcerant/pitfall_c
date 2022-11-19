#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
    int val = 1;
    int * p = NULL;
    p = &val; // asi funciona bien
    //*p = val; // y asi falla
    printf("%d\n", *p);
    return EXIT_SUCCESS;
}
