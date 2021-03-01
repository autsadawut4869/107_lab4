#include <stdio.h>
#include <string.h>
int main()
{
    char in[200]={'\0'};
    int i=0,j=0;
    scanf("%s",in);
    for(i=0; i<strlen(in); i++)
    {
        if(in[i]!=in[i+1]){
            printf("%c",in[i]);
        }
    }

    return 0;
}
