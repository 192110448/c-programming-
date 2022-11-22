#include<stdio.h>
int main()
{
	int num,rem,sum=0,i;
	
	printf("enter num:");
	scanf("%d",&num);
	for(i=1;i<=(num-1);i++)
	{
		rem=num%i;
	if(rem==0)
	   {
	   	sum=sum+i;
	   }
	}
	if(sum==num)
	  printf("%d perfect numb",num);
	else
	  printf("%d not perfect num",num);
	return 0;
}
