#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	while(a<b)
	{
		if(a%2==0)
	{
		printf("%d\n",a);
    }
    a=a+1;
	}
}
