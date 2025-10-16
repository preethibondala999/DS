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
		scanf("%s %d %f %f %f",s[i].name,&s[i].rollno,&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].average=s[i].total/3;
		display(s[i]);
		if(s[i].average>90.0)
		printf("Grade:A\n");
		else if(s[i].average>80.0&&s[i].average<=90.0)
		printf("Grade:B\n");
		else if(s[i].average>70.0&&s[i].average<=80.0)
		printf("Grade:C\n");
		else
		printf("Grade:D\n");
	}
	return 0;
}
int display(struct student s)
{
	printf("%s \n %d \n",s.name,s.rollno);
}
