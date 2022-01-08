#include<stdio.h>
void main()
{
	int i,a,even=0,odd=0,zero=0,r;
	scanf("%d",&a);
	
	
	while(a>0)
	{  r=a%10;
	   a=a/10;
		if(r==0)
		zero++;
		else if(r%2==0)
		even++;
		else
		zero++;
		
	} printf("%d %d %d",even,odd,zero);
	
	}
