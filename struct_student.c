#include<stdio.h>
struct student
{
	char name[20],branch[10];
	int rollno,section;
	float cgpa;
};
int main()
{
	struct student s[80];
	int n,i;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter student details\n");
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%d%f",s[i].name,s[i].branch,&s[i].rollno,&s[i].section,&s[i].cgpa);
	}
	for(i=0;i<n;i++)
	{
		printf("Name:%s\nBranch:%s\nRollno:%d\nSection:%d\nCGPA:%f\n",s[i].name,s[i].branch,s[i].rollno,s[i].section,s[i].cgpa);
	}
	return 0;
}
