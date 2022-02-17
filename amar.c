#include<stdio.h>
struct student
{
  int rno;
  struct name
  {
  	char fn[5],mn[10],ln[10];
	  }	sname;
	  float cgpa;
	  
};
int main()
{
struct student s={12,{"S","Amar","."},8.9};

printf("%d",s.rno);
printf("\t %s%s%s",s.sname.fn,s.sname.mn,s.sname.ln);
printf("\t%f",s.cgpa);
}
