#include<stdio.h>
main()
{
	int r,n,cube,sum,temp,min,max;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
	{
		temp=n;
		sum=0;
	while(temp>0)
	{
	r=temp%10;
	cube=r*r*r;
	sum=sum+cube;
	temp=temp/10;
}
if(n==sum)
printf("%d\n",sum);
}
}
