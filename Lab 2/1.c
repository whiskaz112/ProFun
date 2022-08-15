#include <stdio.h>

int main()
{
    int a,b=2;
    printf("Enter number : ");
    scanf("%d",&a);
    while(a!=1)
    {
        if(a%b==0)
        {
            printf("%d",b);
            a/=b;
            if(a!=1)
            {
                printf("x");
            }
        }else
        {
            b++;
        }
    }
    return 0;
}