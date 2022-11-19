#include <stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    size_t len = 10;
    char *buffer = (char*)malloc(sizeof(char)*len);
    printf("dime tu nombre: ");
    fflush(stdout);
    gets(buffer,&len,stdin);
    printf("tu nombre es: %s\n", buffer);
    free(buffer);
    return EXIT_SUCCESS;
}
