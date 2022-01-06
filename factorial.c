#include<stdio.h>
void main()
{int n;
	int m=1;
	int i=1;
	scanf("%d",&n);
	while(n>=i)
	{
		m=m*i;
		i++;
	}
	printf("%d",m);
}
