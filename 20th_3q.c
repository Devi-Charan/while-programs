#include<stdio.h>
main()
{
	int a,x=12,m=1,i=1;
	printf("Enter the value of a:");
	scanf("%d",&a);
	while(i<=x)
	{
		m=i*a;
		printf("%d*%d=%d\n",a,i,m);
		i=i+1;
	}
}
