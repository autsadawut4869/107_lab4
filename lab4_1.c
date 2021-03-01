#include <stdio.h>
int main()
{
    int num,i,j,m=0,mn=2000;
    int km,kn,sum;
    scanf("%d",&num);
    int metal[num][3],x=num-2,y=i+3;
    for (i=0;i<num;i++){
        for (j=0;j<3;j++){
            scanf("%d",&metal[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=i;j<y;j++){
            sum=sum+(metal[j][0]*4)+(metal[j][1]*2)+(metal[j][2]*1);
        }
        if(m<sum){
           m=sum;
           km=i+1;
        }
        if(mn>sum){
           mn=sum;
           kn=i+1;
        }
        sum=0;
    }
    printf("%d %d",km,kn);

    return 0;
}
