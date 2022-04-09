	#include<stdio.h>

struct twoDimVector
{
    int x;
    int y;
};

void main(){
    struct twoDimVector v1 = {1, 4};
    struct twoDimVector v2 = {11, 54}; 
    printf("%di + %dj\n", v1.x, v1.y);
    printf("%di + %dj",v2.x,v2.y);
}