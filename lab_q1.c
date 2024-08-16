#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("Enter the radius: ");
    scanf("%d",&r);

    area=pi*r*r;
    printf("the area of yhe circle is %.2f",area);
}