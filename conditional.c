#include<stdio.h>
main()
{
	int a,b,x;
	printf("\n enter 2 values=");
	scanf("%d%d",&a,&b);
	x=(a>b)?a:b;
	printf("\n biggest of %d and %d is %d",a,b,x);
}
