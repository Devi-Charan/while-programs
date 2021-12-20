#include<stdio.h>
main()
{
	int i=1,n,a=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(i<n+1)
	{
		a=a+i;
		i=i+1;
	}
	printf("sum:%d",a);
}
