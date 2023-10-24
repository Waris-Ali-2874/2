#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2;
    float dis;
    printf("Enter the L1 latitude of the place:-(");
    scanf("%f",&l1);
    printf("Enter the L2 latitude of the place:-)");
    scanf("%f",&l2);
    printf("Enter the G1 longitude of the place:-(");
    scanf("%f",&g1);
    printf("Enter the G2 longitude of the place:-)");
    scanf("%f",&g2);
    dis=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance between the places is:- %f",dis);
    return 0;


}
