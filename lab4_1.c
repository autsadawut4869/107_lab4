#include <stdio.h>
int main()
{
    int num,i,j,m=0,mn=2000;
    int km,kn,sum;
    scanf("%d",&num);
    int a[num][3];
    for (i=0;i<num;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<num-2;i++){
        for(j=i;j<i+3;j++){
            sum=sum+(a[j][0]*4)+(a[j][1]*2)+(a[j][2]*1);
            //printf("%d\n",sum);
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
