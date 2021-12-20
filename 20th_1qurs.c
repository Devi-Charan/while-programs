#include<stdio.h>
main()
{
	int a=1,n,square,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(a<=n)
	{
	    square=a*a;
	    sum=sum+square;
	    a=a+1; 
	}
	printf("sum:%d",sum);
}
