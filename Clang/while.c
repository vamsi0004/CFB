#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter upper limit : ");
	scanf("%d",&n);
	printf("The natural numbers from 1 - %d : ",n);
	while(i<=n){
		printf("%d ",i);
		i++;}
		printf("\n");
        return 0;
}