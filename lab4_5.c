#include <stdio.h>
int main()
{
    int n,i=0,j=0,tmp=0,s,x=0,k[4];
    scanf("%d",&n);
    char m[n][50];
    for (i=0;i<n;i++)
    {
        scanf("%s",&m[i]);
        for (s=1;s<4;s++){
            k[s] = 0;
        }
        k[0]=1;
        for (j=0;m[i][j]!='\0';j++)
        {
            if (m[i][j] == 'A'){
                tmp=k[1];
                k[1]=k[2];
                k[2]=tmp;
            }
            else if (m[i][j] == 'B'){
                tmp=k[0];
                k[0]=k[3];
                k[3]=tmp;
            }
            else if (m[i][j] == 'C'){
                tmp=k[0];
                k[0]=k[2];
                k[2]=tmp;
                tmp=k[1];
                k[1]=k[3];
                k[3]=tmp;
            }
            else if (m[i][j] == 'D'){
                tmp=k[0];
                k[0]=k[1];
                k[1]=tmp;
                tmp=k[2];
                k[2]=k[3];
                k[3]=tmp;
            }
            else if (m[i][j] == 'E'){
                tmp=k[0];
                k[0]=k[3];
                k[3]=tmp;
                tmp=k[1];
                k[1]=k[2];
                k[2]=tmp;
            }
        }
        for (s=0;s<4;s++)
        {
            if (k[s]==1){
                    x=s+1;
                printf("%d\n",s);
            }
        }
    }
    return 0;
}
