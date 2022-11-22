#include<stdio.h>
int main()
{
	int i,n;
	
	printf("print even numbers till:");
	scanf("%d",&n);
	
	printf("all even numbers from 1 to %d are: \n",n);
	
	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	
	return 0;
}
