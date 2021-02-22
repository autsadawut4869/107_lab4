#include <stdio.h>
int main()
{
    long int a,k=0,x=0;
    scanf("%ld",&a);

    if(a==1||a==3||a==5||a==7||a==11||a==13||a==17||a==19)
    {
        printf("%ld",a);
    }
    else
    {
        x=a/2;
        printf("%ld %ld",x+5,x+x+1);
    }

    return 0;
}
