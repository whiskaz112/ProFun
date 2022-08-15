#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    if(n1 < n2)
    {
        n3 = n2;
        n2 = n1;
        n1 = n3;
    }
    for(int i = n2 ; i>=1 ; i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}