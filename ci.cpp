#include<stdio.h>
#include<math.h>
main()
{
	int p,r,t;
	float a,ci;
	printf("enter the value of p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	a=p*pow(1+ (r/100),t);
	ci=a-p;
	printf("%f",ci);
}
