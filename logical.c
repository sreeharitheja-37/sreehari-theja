#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the 3 values"); 
    scanf("%f%f%f",&a,&b,&c);
    int d=a>b&&b>c;
    printf("%f",d);
}
