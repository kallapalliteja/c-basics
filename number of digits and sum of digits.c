#include<stdio.h>
void main()
{
	int n, sum=0,k,r;
	scanf("%d",&n);//1234
	while(n>0)
	{
		r=n%10;
		printf("%d ",r);
		n=n/10;
		sum=sum+r;
		
		
	} printf("%d",sum);
}
