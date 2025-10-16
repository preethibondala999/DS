#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	float m1,m2,m3,total,average;
};
int display(struct student s);
int main()
{
	struct student s[5];
	int n,i;
	printf("enter n value:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name,rollno,marks of student %d:\n",i+1);
		scanf("%s%d%f%f%f",s[i].name,&s[i].rollno,&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].average=s[i].total/3;
		displa(s[i]);
	}
	return 0;
}
int display(struct student s)
{
	printf("%s%d%f",s.name,s.rollno,s.average);
}
