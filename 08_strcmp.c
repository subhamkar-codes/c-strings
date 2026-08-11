#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char s1[69] = "Harry";
    char s2[69] = " Bhai";

    int a = strcmp("far", "joke");
    printf("%d \n", a);

    int b = strcmp("far", "ajoke");
    printf("%d \n", b);

    return 0;
}