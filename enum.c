#include <stdio.h>
enum day { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main()
{
    enum day today;
    today = Friday;
    printf("Value of today: %d\n", today);  
}

