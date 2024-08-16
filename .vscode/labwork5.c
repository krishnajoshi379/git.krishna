#include <stdio.h>
void main()
{
    int x, y, z;

    printf("enter the value of x:- ");
    scanf("%d", &x);

    printf("enter the value of y:- ");
    scanf("%d", &y);

    printf("enter the value of z:- ");
    scanf("%d", &z);

    if (x >= y)

    {
        if (x >= z)
        {
            printf("x is max");
        }
        else
        if(y>=z)
        {
            printf("y is max");
        }
    }
        else

    printf("z is max");
    }




