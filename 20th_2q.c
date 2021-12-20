#include<stdio.h>
main()
{
	int a,n=1,m=1;
	printf("Enter the value of a:");
	scanf("%d",&a);
	while(n<=a)
	{
		m=m*n;
		n=n+1;
	}
	printf("Factorial of the number:%d",m);
}
