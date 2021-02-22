#include <stdio.h>
int main()
{
    int a[6],i=0,j=0;
    int s[2][6]={0},max=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<6;j++){
            scanf("%d",&s[i][j]);
        }
    }
    a[0]=(s[0][0]*10)+(s[0][1]*1);
    a[1]=(s[1][0]*10)+(s[1][1]*1);
    printf("%d %d",a[0],a[1]);
    return 0;
}
