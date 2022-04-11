#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("samplefile.txt", "r");
    int i;
    fscanf(ptr, "%d", &i);
    printf("The value of i is %d", i);
    fclose(ptr);
    return 0;
}