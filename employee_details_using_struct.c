#include<stdio.h>
struct employee
{
	char name[20];
	int eid,salary;
};
int main()
{
	int n,i;
	printf("enter n value:");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		printf("enter name,eid,salary of %d:\n",i+1);
		scanf("%s %d %d",e[i].name,&e[i].eid,&e[i].salary);
    }
    printf("\n employee details:\n");
    printf("---------------------\n");
    printf("name\teid\tsalary\t\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t\n",e[i].name,e[i].eid,e[i].salary);
    }
	return 0;
}
