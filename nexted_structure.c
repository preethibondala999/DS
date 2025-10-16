#include<stdio.h>
struct marks
{
    int math;
    int science;
    int english;
};
struct student
{
    char name[50];
    int roll_no;
    struct marks m;  
};
int main()
{
    struct student s;  
    printf("Enter student's name,rollno,maths,science,english: ");  
    scanf("%s %d %d %d %d",s.name,&s.roll_no,&s.m.math, &s.m.science, &s.m.english);
    printf("\nStudent Details:\n");
    printf("Name:%s\nRoll Number:%d\nMath:%d\nScience:%d\nEnglish:%d\n",s.name,s.roll_no,s.m.math,s.m.science,s.m.english);  
}
