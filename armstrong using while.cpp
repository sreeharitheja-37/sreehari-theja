#include<stdio.h>
int main()
{
	int num,rem,temp=0,cube,sum;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		num=num/10;
	}
	if(sum==temp)
	printf("armstrong number");
	else
	printf("not an armstrong number");
}
