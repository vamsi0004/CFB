// multi dimensional matrix

#include<stdio.h>
int main(){
    int marks[2][4] = {{1, 2, 3, 4,},{11, 22, 33, 44}};

    for (int i = 0; i < 2; i++) // For rows
    {
        for (int j = 0; j < 4; j++) // For Columns
        { 
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}