#include<stdio.h>
struct student
{
	int rno;
	char name [10];
	float cgpa;
};
main()
{
	struct student s;
	scanf("%d%s%f",& s.rno ,& s.name ,& s.cgpa);
	printf("student details are \n");
	printf("rno is %d name is %s cgpa is%f",s.rno,s.name,s.cgpa);
}
