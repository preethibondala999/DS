
#include<stdio.h>  
#include <string.h>    
union student     
{  
	 int rollno;      
    char name[50];  
    float cgpa;
}s1;  //declaring s1 variable for union
int main( )    
{     
  	s1.rollno=39;    
	printf("student1-id : %d\n", s1.rollno); 
   	strcpy(s1.name,"ABCD”);
	printf( "student1-1 name : %s\n", s1.name);    
	s1.cgpa=9.8;
	printf( "student1-cgpa : %f\n", s1.cgpa);  
	return 0;  
} 

