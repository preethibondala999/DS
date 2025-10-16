#include<stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
int main()
{
	int a[50];
	int n,i;
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter the %d elements:",n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("after applying quicksort\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int pvt,i,j,temp;
	if(low<high)
	{
		pvt=low;
		i=low;
		j=high;
		while(i<j)
		{
			while(a[i]<=a[pvt]&&i<=high)
			{
				i++;
			}
			while(a[j]>a[pvt]&&j>=low)
			{
				j--;
			}
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[pvt];
	a[pvt]=a[j];
	a[j]=temp;	
	return j;
}
