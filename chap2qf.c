#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;
    printf("Enter the temperature:-");
    scanf("%f",&t);
    printf("Enter the velocity of the wind:-");
    scanf("%f",&v);
    wcf=35.74+0.621*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("Your wind chill factor is:-%f",wcf);
    return 0;
}
