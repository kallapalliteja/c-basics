#include<stdio.h>
void main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum=sum+i;
		}
	}
		if(sum==a)
		printf("perfect num");
		else
		printf("non perfect");
}

		
