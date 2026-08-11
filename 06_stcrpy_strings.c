#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    printf("%d \n", strlen(st));

    char target[30];
    strcpy(target, st); // target now contains "harry"
    printf("the source is %s and target is %s \n", st, target);
    
    return 0;
}