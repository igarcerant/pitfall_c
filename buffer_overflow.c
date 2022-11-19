#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    char buffer[20];
    printf("dime tu nombre: ");
    fflush(stdout);
    gets(buffer);
    printf("tu nombre es: %s\n", buffer);
    return EXIT_SUCCESS;
}