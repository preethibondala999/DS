#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[10];
	float per;
}s1={1,"siniha",95},s2;
int main()
{
	struct student s3={3,"kaveri",93},s4;
	/*s2.rollno=2;
	strcpy(s2.name,"prasanna");
	s2.per=93;*/
	s2=s1;
	printf("enter s4 details");
	scanf("%d",&s4.rollno);
	scanf("%s",s4.name);
	scanf("%f",&s4.per);
	printf("%d %s %.2f",s1.rollno,s1.name,s1.per);
	printf("\n%d %s %.2f",s2.rollno,s2.name,s2.per);
	printf("\n%d %s %.2f",s3.rollno,s3.name,s3.per);
	printf("\n%d %s %.2f",s4.rollno,s4.name,s4.per);
	return 0;
}
