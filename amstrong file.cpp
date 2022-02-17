#include<stdio.h>
int main(){
int n,n1,result=0,r;
printf("enter a three digit integer");
scanf("%d",&n);
n1=n;
while(n!=0){
r=n%10;
result=result+(r*r*r);
n=n/10;
}
if(result==n)
printf("%d is an amstrong number",n);
else

printf("%d is not an amstrong number",n);
return 0;
}

