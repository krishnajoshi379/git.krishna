#include <stdio.h>
void main()
{
    int a,b,c,d;

    printf("enter the value of a:- ");
    scanf("%d", &a);

    printf("enter the value of b:- ");
    scanf("%d", &b);

    printf("enter the value of c:- ");
    scanf("%d", &c);

     printf("enter the value of d:- ");
    scanf("%d", &d);


    if (a >= b)

    {
        if (b >= c)
        {
            printf("a is max");
      
      }
        else
        if(c>=d)
        {
            printf("b is max");
        }
    }
    else
    if(d>=a)

    printf("d is max");
   
   
    }




