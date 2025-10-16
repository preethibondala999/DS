#include<stdio.h>
struct student
{
	char name[20],branch[10];
	int rollno,section;
	float cgpa;
};
int main()
{
	struct student s;
	printf("enter name,rollno,branch,section,cgpa:");
	scanf("%s%d%s%d%f",s.name,&s.rollno,s.branch,&s.section,&s.cgpa);
	printf("%s\n%d\n%s\n%d\n%f\n",s.name,s.rollno,s.branch,s.section,s.cgpa);
}
