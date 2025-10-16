#include<stdio.h>
typedef struct complex
{
	int real,img;
}complex;
complex complex_add(complex x,complex y);
int main()
{
	complex a,b,sum;
	scanf("%d %d",&a.real,&a.img);
	scanf("%d %d",&b.real,&b.img);
	sum = complex_add(a,b);
	printf("sum of the complex no's:%d+%di\n",sum.real,sum.img);
	return 0; 
}
complex complex_add(complex x,complex y)
{
	complex add;
	add.real=x.real+y.real;
	add.img=x.img+y.img;
	return add;
}
