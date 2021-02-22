#include <stdio.h>
int main()
{
    int ex=0,d=0,m=0,y=0,d1=0,m1=0,y1=0,sum=0,day=30,year=0,month=0,sum1=0;

    scanf("%d%d%d",&d,&m,&y);
    scanf("%d%d%d",&d1,&m1,&y1);

    if(y1>=y)
    {
        sum=(30-d)+d1;
        sum1=sum+day;
        month=sum1/30;
        ex=(12-d)+d1;
        if(ex>=0)
            ex=ex;
        else
            ex=ex*-1;
        if(ex>=12)
            year=1;
        else
            year=0;
        printf("%d %d %d",sum,month,year);
    }
    else
    {
        printf("EXP before MFG");
    }

    return 0;

}
