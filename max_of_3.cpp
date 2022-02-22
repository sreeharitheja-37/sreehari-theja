#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf(" a is max %d",a);
	else if(b>a&&b>c)
	printf("bis max %d",b);
	else
	printf("c is max %d",c);
}
