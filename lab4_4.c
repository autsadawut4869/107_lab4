#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Acronym(char *in);
int main()
{
    char in[1000];
    int i=0,j=0;
    gets(in);
    Acronym(in);

    return 0;
}
void Acronym(char *in)
{
    int i;
    for(i=0;i<strlen(in);i++)
    {
        if(i==0)
            printf("%c",toupper(in[0]));
        else if(in[i]==' ')
        {
            if(in[i+1]=='i'&&in[i+2]==' '){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='o'&&in[i+2]=='f'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='t'&&in[i+2]=='h'&&in[i+3]=='e'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='o'&&in[i+2]=='n'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='a'&&in[i+2]=='t'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='f'&&in[i+2]=='o'&&in[i+3]=='r'){
                printf("%c",toupper(in[i]));
            }
            else if(in[i+1]=='w'&&in[i+2]=='i'&&in[i+3]=='t'&&in[i+4]=='h'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='a'&&in[i+2]==' '){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='a'&&in[i+2]=='n'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='i'&&in[i+2]=='n'){
                printf("%c",toupper(in[i+1]));
            }
            else if(in[i+1]=='a'&&in[i+2]=='n'&&in[i+3]=='d'){
                printf("%c",toupper(in[i+1]));
            }
            else{
                printf("%c",toupper(in[i+1]));
            }
        }
    }
}
