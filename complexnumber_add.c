#include<stdio.h>
struct complex
{
	int real;
	int img;
};
int main()
{
	struct complex a,b,c;
	scanf("%d%d",&a.real,&a.img);
	scanf("%d%d",&b.real,&b.img);
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	if(c.img>=0)
	printf("%d+%di",c.real,c.img);
	else
	printf("%d%di",c.real,c.img);
	return 0;
}
