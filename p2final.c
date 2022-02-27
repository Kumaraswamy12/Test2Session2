#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the coordinates of 1st point\n");
  scanf("%f%f",x1,y1);
  printf("enter the coordinates of 2nd point\n");
  scanf("%f%f",x2,y2);
  printf("enter the coordinates of 3rd point\n");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
 float dis = 0.0,dis1=0.0,dis2=0.0,s=0.0,area=0.0;
    dis = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
   dis1 = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
   dis2 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
  s=(dis+dis1+dis2)/2.0;
  area=sqrt(s*(s-dis)*(s-dis1)*(s-dis2));
  if(area)
    return 1;
  else
    return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle)
    printf("The given points:\n%f %f\n%f %f\n%f %f\nforms a triangle",x1,y1,x2,y2,x3,y3);
  else
    printf("The given points:\n%f %f\n%f %f\n%f %f\n don't form a triangle",x1,y1,x2,y2,x3,y3);
    
}
int main()
{
 float  x1,x2,x3,y1,y2,y3;
  int is;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  is=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,is);
  return 0;
}






