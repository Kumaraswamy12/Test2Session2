#include <stdio.h>
#include <math.h> 
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the values of First point\n");
    scanf("%f%f", x1, y1);
    printf("Enter the values of Second point\n");
    scanf("%f%f", x2, y2);
}
void find_distance(float x1, float y1, float x2, float y2,float *area)
{
    *area = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
void output(float x1, float y1, float x2, float y2, float area)
{
    printf("The distance between point1(%f,%f) and point2(%f,%f) is %f\n", x1, y1, x2, y2, area);
}
int main()
{
    float x1, y1, x2, y2,area=0.0;
    input(&x1, &y1, &x2, &y2);
    find_distance(x1, y1, x2, y2,&area);
    output(x1,y1,x2,y2, area);
    return 0;
}
