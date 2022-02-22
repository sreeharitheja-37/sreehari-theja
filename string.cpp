#include<stdio.h>
main()
{
 char name[20];
 char name1[20];
 FILE *fp;
 fp=fopen("dream.txt","w");
 
puts("Enter any String\n"); 
gets(name);
fputs(name,fp);
fclose(fp);
fp=fopen("dream.txt","r");
fgets(name1,10,fp);       /* Here '10' is nothing but String Length, i.e., upto how- 
puts("String from file is:\n");         many characters u want to access from a file.  */
puts(name1);                        
fclose(fp);
}

