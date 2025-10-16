#include<stdio.h>
struct student
{
	char name[20],dept[10];
	int rollno;
};
int main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("enter student name,dept,rollno:");
	scanf("%s %s %d",ptr->name,ptr->dept,&ptr->rollno);
	printf("name:%s\ndept:%s\nrollno:%d\n",ptr->name,ptr->dept,ptr->rollno);
}
