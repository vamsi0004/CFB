/*arrows operators in pointers*/

#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

void main(){
    int a = 45;
    struct employee krishna = {34, 5.2, "krishna"};
    struct employee *ptr = &krishna;

    printf("The name of krishna is %s\n", ptr->name);
    printf("The salary of krishna is %d\n", ptr->salary);
    printf("The hike of krishna is %f\n", ptr->hike);
}