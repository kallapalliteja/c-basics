#include<stdio.h>
void main()
{
	int a,i,n=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
	{
		
		n=n;
		n++;
	}
	}
	 if(n==2)
	 printf("prime ");
	 else
	 printf("non prime");
}
