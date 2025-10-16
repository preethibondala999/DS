#include<stdio.h>
int merge(int a[],int l2,int m,int h2)
{
	int i,j,k,b[10];
	i=l2;
	j=m+1;
	k=l2;
	while(i<=m&&j<=h2)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>m)
	{
		while(j<=h2)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=m)
		{
			b[k]=a[i];
			i++;
			k++;
		}
    }
    for(k=l2;k<=h2;k++)
    {
    	a[k]=b[k];
	}
}
int mergesort(int a[],int l1,int h1)
{
	if(l1<h1)
	{
		int m=(l1+h1)/2;
		mergesort(a,l1,m);
		mergesort(a,m+1,h1);
		merge(a,l1,m,h1);
	}
}
int n;
int main()
{
	int i,a[10];
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
    mergesort(a,0,n-1);
    printf("\nsorted array:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
	return 0;
}
