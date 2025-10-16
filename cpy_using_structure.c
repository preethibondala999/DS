#include<stdio.h>
#include<string.h>
struct student 
{
	char name[20];
	int marks;
};
int main()
{
	struct student s1,s2;
	strcpy(s1.name,"siniha");
	s1.marks=90;
	s2=s1;
	printf("name:%s , marks:%d",s2.name,s2.marks);
	return 0;
}
