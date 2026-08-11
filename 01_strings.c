#include<stdio.h>
int main (){
    char st[] = {'A','B', 'C', '\0'};
    //char st[] = "ABC";  //same as upper one 
    /* '\0' is a null character,
     and is use for mark the ending of an array*/
     for (char i = 0; i < 3; i++)
     {
         printf ("The character is %c\n",st[i]);
        
     }
     
    
    
    return 0;
}