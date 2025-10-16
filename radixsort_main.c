#include<stdio.h>
int getmax(int a[],int n)
{
	int i,m=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>m)
		m=a[i];
	}
	return m;
}
void countsort(int a[],int n,int exp)
{
	int i;
	int output[n];
	int count[10]={0};
	for(i=0;i<n;i++)
	count[(a[i]/exp)%10]++;
	for(i=1;i<10;i++)
	count[i]+=count[i-1];
	for(i=n-1;i>=0;i--)
	{
		output[count[(a[i]/exp)%10]-1]=a[i];
		count[(a[i]/exp)%10]--;
	}
	for(i=0;i<n;i++)
	a[i]=output[i];
}
void radixsort(int a[],int n)
{
	int m=getmax(a,n);
	int exp;
	for(exp=1;m/exp>0;exp*=10)
	countsort(a,n,exp);
}
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int n,i,a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	radixsort(a,n);
	printarray(a,n);
	return 0;
}
