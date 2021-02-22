#include <stdio.h>
int main()
{
    long int a,k=0,x=0,z=0,y=0,m=0,h=0,i=0;
    scanf("%ld",&a);

    if(a==1||a==3||a==5||a==7||a==11||a==13||a==17||a==19)
    {
        printf("%ld",a);
    }
    else
    {
        for(i=0;i<10;i++){
            z=a-i;
            if(z%2!=0){
                if(z%5==0)
                continue;
                h=z;
                break;
            }
        }
        for(i=0;i<10;i++){
            y=a+i;
            if(y%2!=0){
                if(y%5==0)
                continue;
                m=y;
                break;
            }
        }
        printf("%d %d",h,m);
    }


    return 0;
}
