#include <stdio.h>
struct student {
  int reg;
  int m,p,c;
  int tot;
  float avg;
};
void main() {
	struct student s[60];
	int i, n;
	printf("Enter number of students : ");
	scanf("%d", &n);
	for (i=0;i<n;i++ ) { 
		printf("Enter regdno, three subjects marks of student-%d: ", i);
		scanf("%d%d%d%d",&s[i].reg,&s[i].m,&s[i].p,&s[i].c);
	}
	for (i=0;i<n;i++ ) { 
		s[i].tot=s[i].m+s[i].p+s[i].c;
		s[i].avg=s[i].tot/3.0;
		printf("Student-%d Regdno = %d\tTotal marks = %d\tAverage marks = %f\n",i,s[i].reg,s[i].tot,s[i].avg );
	}
}