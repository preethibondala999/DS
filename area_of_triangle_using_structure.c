#include <stdio.h>
#include <math.h>
typedef struct area 
{
    double x;
    double y;
} Point;
double computeArea(Point p1, Point p2, Point p3) 
{
    return fabs(0.5*(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y)));
}
int main() 
{
    Point A, B, C;
    printf("Enter coordinates of first point (x y): ");
    scanf("%lf %lf", &A.x, &A.y);
    printf("Enter coordinates of second point (x y): ");
    scanf("%lf %lf", &B.x, &B.y);
    printf("Enter coordinates of third point (x y): ");
    scanf("%lf %lf", &C.x, &C.y);
    double area = computeArea(A, B, C);
    printf("Area of the triangle: %.2lf\n", area);
    return 0;
}

