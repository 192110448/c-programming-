#include<stdio.h>
int main( )
{
	int age;
	printf("enter age of person:");
	scanf("%d",&age);
	if(age>17)
	  printf("\nperson is elegible for voting");
	else
	  printf("\nperson is not eligible for voting % years",17-age);
	return 0;
}
