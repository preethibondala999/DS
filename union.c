#include<stdio.h>
union student
{
	char name[20],dept[10];
	int rollno;
};
int main()
{
	union student s;
	strcpy(s.name,"siniha");
	strcpy(s.dept,"cse");
	s.rollno =26;
	printf("rollno: %d\n",s.rollno);
	printf("name: %s\n",s.name);
	printf("dept: %s\n",s.dept);
	//printf("rollno: %d\n",s.rollno);
}
