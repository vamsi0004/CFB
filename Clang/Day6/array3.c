#include<stdio.h>

int main(){
    float marks[3] = {25.0, 2.5, 15.23};
    for(int i = 0; i < 3; i++){
        printf("The marks scored by student %d is %f \n", i+1, marks[i]);
    }
    return 0;
}