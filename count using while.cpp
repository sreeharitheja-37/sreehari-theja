#include<stdio.h>
int main()
{
	int n,rem,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		count++;
		n=n/10;
	}
	printf("no of digits is%d",count);
}
