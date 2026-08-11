#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Harry";
    char s1[69] = "Harry";
    char s2[69] = " Bhai";

    strcat (s1 ,s2);
     printf(" %s \n",s1);

    printf(" %s%s \n",s1,s2 );

    return 0;
}