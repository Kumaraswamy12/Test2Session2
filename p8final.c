#include <math.h>
#include <stdio.h>
typedef struct _point
{
    float x, y;
} point;
typedef struct _line
{
    point p1, p2;
    float distance;
} line;
typedef struct _polygon
{
    int n;
    line l[100];
    float perimeter;
} polygon;
int input_n()
{
    int n;
    printf("Enter the number of sides in the polygon\n");
    scanf("%d", &n);
    return n;
}
point input_point()
{
    point p;
    printf("Enter the points\n");
    scanf("%f%f", &p.x, &p.y);
    return p;
}
float find_length(point p1, point p2)
{
    float distance = 0.0;
    distance = sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
    return distance;
}
line input_line()
{
    line l;
    l.p1 = input_point();
    l.p2 = input_point();
    l.distance = find_length(l.p1, l.p2);
    return l;
}
void input_n_lines(int n, line l[])
{
    for (int i = 0; i < n; i++)
        l[i] = input_line();
}
void input_polygon(int n, polygon *p)
{
    p->n = n;
    input_n_lines(p->n, p->l);
    p->perimeter = 0.0;
}
void find_perimeter(polygon *p)
{
    for (int i = 0; i < p->n; i++)
        p->perimeter += p->l[i].distance;
}
void output(polygon p)
{
    printf("The perimeter of %d sided polygon is %f\n", p.n, p.perimeter);
}
int main()
{
    int n = input_n();
    polygon p;
    input_polygon(n, &p);
    find_perimeter(&p);
    output(p);
    return 0;
}
