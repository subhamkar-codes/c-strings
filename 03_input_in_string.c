#include<stdio.h>

int main (){
    char st[50];
    printf("Enter ur character: \n");
    scanf("%s",&st);

    printf("Your character is %s \n",st);
    
    // this only works for single word srtings 
    //if ur st has spaces or mutiple line use diff method.
    return 0;
}