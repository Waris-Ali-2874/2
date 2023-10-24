#include<stdio.h>
#include<math.h>
int main()
{
    float ang,sine,cosine,tangent,cotangent,secant,cosecant;
    printf("Enter the angle value in degrees:-");
    scanf("%f",&ang);
    sine=sin(ang);
    cosine=cos(ang);
    tangent=tan(ang);
    cotangent=(1/tangent);
    secant=(1/cosine);
    cosecant=(1/sine);
    printf("[(%f)",sine);
    printf("(%f)",cosine);
    printf("(%f)",tangent);
    printf("(%f)",cotangent);
    printf("(%f)",secant);
    printf("(%f)]",cosecant);
    return 0;



}
