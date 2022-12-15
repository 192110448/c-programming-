#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter total user and staff user\n");
	scanf("%d%d",&i,&j);
	k=i-(j+j/3);
	printf("no of student user is %d",k);
}
