#include<stdio.h>
main()
{
	int n,z=0;
	scanf("%d",&n);
	while(n>0)
	{
	if(n%10==0)
	z=z+1;
	n=n/10;}
	printf("%d",z);
}
