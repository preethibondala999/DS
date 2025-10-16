#include<stdio.h>
int qs(int a[],int l,int r)
{
	int i,j,p,t;
	if(l<r)
	{
	p=l;
	i=l;
	j=r;
	while(i<j)
	{
	while(a[i]<=a[p]&&i<r)
	i++;
	while(a[j]>a[p])
	j--;
	if(i<j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	}
	t=a[p];
	a[p]=a[j];
	a[j]=t;
	qs(a,l,j-1);
	qs(a,j+1,r);
    }
}
int main()
{
	int n,i,a[30];
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("unsorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	qs(a,0,n-1);
	printf("\nsorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
