#include <stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
    printf("Enter the values of x1,y1 and x2,y2\n");
    scanf("%f %f %f %f",x1,y1,x2,y2);
}
void find_distance( float x1, float y1, float x2, float y2, float *area)
{
    float x=x2-x1;
    float y=y2-y1;
    *area=sqrt(pow(x*x,2)+pow(y*y,2));
}
void output(float x1, float y1,float x2, float y2, float area)
{
    printf("The area is %f",&area);
}
int main()
{
    float x1,y1,x2,y2,area;
    input (&x1,&y1,&x2,&y2);
    
    find_distance( x1, y1, x2, y2, &area);
    output( x1,  y1, x2,  y2,  area);
    return 0;
}