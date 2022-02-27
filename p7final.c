#include<math.h>
#include<stdio.h>
typedef struct _point {
float x,y;
}point;
typedef struct _line
{
point p1,p2;
float distance;
}line;
point input_point()
{
    point p;
    printf("Enter the points\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
line input_line()
{
    line k;
    k.p1=input_point();
    k.p2=input_point();
    return k;
}
void find_length(line *l)
{
    l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
}
void output(line l)
{
    printf("The Length of Line with coordinates (%f,%f) and (%f,%f) is %f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
    line l;
    l=input_line();
    find_length(&l);
    output(l);
    return 0;
}
