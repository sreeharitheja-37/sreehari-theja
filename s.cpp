#include<stdio.h>
main()
{
	int min,max,r,sum,n,fact,i,temp;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
	{
	temp=n;
	sum=0;
		while(temp>0)
		{
			r=temp%10;
			fact=1;
			for(i=1;i<=r;i++)
			{
				fact=fact*i;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(n==sum)
		printf("%d\n",n);
	}
}
