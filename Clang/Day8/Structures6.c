#include <stdio.h>
struct movie {
	char title[20];
	char director[20];
	int year;
	int minutes_running;
};
void main() {
	struct movie m;
	printf("Enter the movie name : ");
	scanf("%s",&m.title); 
	printf("Enter the director name : ");
	scanf("%s",&m.director); 
	printf("Enter the year in which the movie is released : ");
	scanf("%d",&m.year); 
	printf("Enter the duration of the movie in minutes : ");
	scanf("%d",&m.minutes_running); 
	printf("Movie title = %s\n",m.title ); 
	printf("Movie director = %s\n",m.director ); 
	printf("Movie year = %d\n",m.year ); 
	printf("Movie duration in minutes = %d\n",m.minutes_running ); 
}