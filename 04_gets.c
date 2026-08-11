#include <stdio.h>

int main()
{
    char st[99];
    printf("Enter your input: \n");
    gets(st); // gets(st) use for store multi line string.

    puts(st);
    printf("new \n");

    printf("%s \n", st);
    printf("old \n");
    return 0;
}