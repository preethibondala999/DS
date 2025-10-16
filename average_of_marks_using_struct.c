#include<stdio.h>
struct student 
{
	char name[20];
	int marks;
};
int main()
{
	int n,i;
	float total=0.00,average;
	printf("enter no of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter name and marks of student %d:",i+1);
		scanf("%s %d",s[i].name,&s[i].marks);
		total+=s[i].marks;
	}
	average=total/3;
	printf("total average of %d students:%.2f",n,average);
	return 0;
}
