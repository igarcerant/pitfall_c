//
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
    char str[5];
    sprintf(str, "%s", "GGGGGGGGGGGG");
    printf("%s\n", str);
    return EXIT_SUCCESS;
}