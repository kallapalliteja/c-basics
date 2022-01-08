#include<stdio.h>
int main()
{
	int n,r,k=0,duck;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;     //r= 1 0 3 2
		
		
	if(r==k)
	{
		duck=1;
		break;
	} 
	n=n/10;
		
	}
	 if(duck==1)
	 printf("duck number");
	 else
	 printf("non duck number");
	
}
