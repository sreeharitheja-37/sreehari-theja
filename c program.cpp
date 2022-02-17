#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	printf("enter your base:--");
	scanf("%d,&x");
	printf("enter your exponent:--");
	scanf("%d",&y);
	printf("your calculated power values is--%f",pow(x,y));
	return 0;
}
