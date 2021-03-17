#include <stdio.h>
#include <string.h>
int main()
{
    char str[150];
    int i,j;	
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0'))
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}
