#include<stdio.h>
struct student{	char dep[10];
int year;
float cgpa;
char name[100];
};
void main()
{
	struct student s[10];
	int n,i;	
	printf("Enter the number of students : ");
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		printf("Enter the details of student - %d\n",i+1);	
		printf("Enter name : ");
		scanf("%s",&s[i].name);	
		printf("Enter department : ");	
		scanf("%s",&s[i].dep);
		printf("Enter year of study : ");
		scanf("%d",&s[i].year);	
		printf("Enter cgpa : ");
		scanf("%f",&s[i].cgpa);
	}
	printf("Details of students\n");
	for(i=1;i<n;i++)
	{	
		printf("Student : %d Name : %s\n",i,s[i].name);	
		printf("Department : %s Year of study  : %d CGPA  : %.2f\n",s[i].dep,s[i].year,s[i].cgpa);
	}
	printf("Student : %d Name : %s\nDepartment : %s Year of study  : %d CGPA  : %.2f\n",i,s[0].name,s[0].dep,s[0].year,s[0].cgpa);
}