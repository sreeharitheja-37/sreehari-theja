#include<stdio.h>
int main()
{
	int b,bill=0;
	char a;
	printf("Menu\n1.idly\n2.dosa\n3.pongal\n4.upma\n5.vada\n");
	printf("enter your choice");
	do
	{
		scanf("%d",&b);
		switch(b)
	   {
	   	case 1:printf("price of idly is 50");
	   	bill=bill+50;
	   	break;
	   	case 2:printf("price of dosa is 70");
	   	bill=bill+70;
	   	break;
	   	case 3:printf("price of pongal is 80");
	   	bill=bill+80;
	   	break;
	   	case4:printf("price of upma is 60");
	   	bill=bill+60;
	   	break;
	   	case5:printf("price of vada is 30");
	   	bill=bill+30;
	    break;
	   	default:("no item found");
	   }
	printf("\n do you want to order more");
	scanf("%c",&a);
}
	while(a=='y');
	printf("\n cost %d",bill);
}
