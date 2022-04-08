#include<stdio.h>
#include<string.h>

void main(){
    char st[6];
    printf("Enter the string of length 5 you want to input using percent c");
    for (int i = 0; i < 5; i++)    {
        scanf("%c", &st[i]); 
        fflush(stdin);
    }
    st[5] = '\0';
    printf("Comparing this string mahesh gives %d", strcmp("mahesh", st));
}