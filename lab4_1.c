#include <stdio.h>
int main()
{
    int num,i=0,j=0,max=0,min=2000;
    int sum1=0,sum2=0,sum=0;
    scanf("%d",&num);
    int metal[num][3];
    for (i=0;i<num;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&metal[i][j]);
        }
    }
    for(i=0;i<num-2;i++)
    {
        for(j=i;j<i+3;j++){
            sum=sum+(metal[j][0]*4)+(metal[j][1]*2)+(metal[j][2]*1);
        }
        if(max<sum){
           max=sum;
           sum1=i+1;
        }
        if(min>sum){
           min=sum;
           sum2=i+1;
        }
        sum=0;
    }
    printf("%d %d",sum1,sum2);

    return 0;
}
