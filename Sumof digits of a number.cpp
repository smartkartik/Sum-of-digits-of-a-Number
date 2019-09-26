#include<stdio.h>
main()
{
	long int n,r,sum=0;
	printf("Enter the number ");
	scanf("%ld",&n);
	while(n>0)
	{
	r=n%10;
	sum=sum+r;
	n=n/10;
	}
	printf("\nTotal sum= %ld",sum);
	return 0;
}

