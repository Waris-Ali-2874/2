#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,ze;
    printf("Enter the X co ordinate:-");
    scanf("%f",&x);
    printf("Enter the Y co ordinate:-");
    scanf("%f",&y);
    r=sqrt(pow(x,2)+pow(y,2));

    printf("cartesian coordinates in polar form are :=(%f",r);
    ze=atan(x/y);
    printf(",%f(in radians))",ze);
    return 0;



}
