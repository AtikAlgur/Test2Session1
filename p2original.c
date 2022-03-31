
#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the coordinates\n");
    scanf("%f %f %f %f %f %f ",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float side1=sqrt(pow(x1-x2,2)+pow(y1-y2,2)); 
    float side2=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    float side3=sqrt(pow(x2-x3,2)+pow(y2-y3,2));  
    
    if(side1+side2>side3 && side1+side3>side2 && side3+side2>side1)
    {
        return 0;
    }
    else{
        return 1;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
    if(istriangle==1) {
        printf("it is traingle");
    }
    else {
        printf("not trianlge");
    }
}
int main(){
float x1,y1,x2,y2,x3,y3;
int istriangle;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    is_triangle( x1,  y1,  x2,  y2, x3,  y3);
    output( x1, y1,  x2, y2, x3,  y3,  istriangle);
    return 0;

}