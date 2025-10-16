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
	struct student s[71];
	int n,i;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name,rollno and marks of student %d:",i+1);
		scanf("%s%d%f%f%f",s[i].name,&s[i].rollno,&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].average=s[i].total/3;
		display(s[i]);	
	}
	return 0;
}
int display(struct student s)
{
	printf("NAME:%s \n ROLL NO:%d \n",s.name,s.rollno);
	printf("Average of %.2f,%.2f,%.2f marks is:%.2f\n",s.m1,s.m2,s.m3,s.average);
}
