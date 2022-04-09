	#include<stdio.h>

struct twoDimVector
{
    int x;
    int y;
};

struct twoDimVector sumvector(struct twoDimVector v1,struct twoDimVector v2)
{
    printf("%di + %dj\n", v1.x, v1.y);
    printf("%di + %dj\n",v2.x,v2.y);
    int a, b;
    a = v1.x + v2.x;
    b = v1.y + v2.y;
    struct twoDimVector result={a,b};
    return result;

}

int main(){
    struct twoDimVector v1 = {1, 4};
    struct twoDimVector v2 = {11, 54}; 
   
    struct twoDimVector v3 =sumvector(v1,v2);
    printf(" the resultant vectors is :%di + %dj",v3.x,v3.y);
}