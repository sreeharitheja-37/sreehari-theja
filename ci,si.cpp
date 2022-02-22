#include<stdio.h>
#include<math.h>
main()
{
	int p,r,t;
	float  ci,si;
	printf("enter the values of prt %d");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	ci=p*pow(1+(r/100),t);
	if(r>3)
	printf("%f",&si);
	else
	printf("%f",&ci);
	
}
