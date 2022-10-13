#include<stdio.h>

int main()
{
    float a,Pi = 3.14;
    int r;

    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    a = Pi * r*r;
    printf("Area of circle is %f having the radius %d",a,r);
    return 0;
}