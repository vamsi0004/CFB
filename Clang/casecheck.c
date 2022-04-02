#include<stdio.h>

int main(){
    char c;
    printf("Enter your character\n");
    scanf("%c", &c);
    if(c>=97 && c<=122){
        printf("Yes this is a lowercase character");
    }
    else{
        printf("No this is not a lowercase character");
    } 
    return 0;
}