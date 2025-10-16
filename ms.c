#include<stdio.h>
void divide(int a[],int l,int r);
void merge(int a[],int l,int m,int r);
int main()
{
	int n,i,a[10];
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("enter array value:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
     printf("unsorted array:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
    divide(a,0,n-1);
    printf("\nsorted array:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
	return 0;
}
void divide(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		divide(a,l,m);
		divide(a,m+1,r);
		merge(a,l,m,r);
	}
}
void merge(int a[],int l,int m,int r)
{
	int i,j,k,n1,n2;
	n1=m-l+1;
	n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
	L[i]=a[l+i];
	for(j=0;j<n2;j++)
	R[j]=a[m+1+i];
	i=0;
	j=0;
	k=1;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
	a[k]=L[i];
	i++;
	k++;
	}
	while(j<n2)
	{
	a[k]=R[j];
	j++;
	k++;
	}
}
