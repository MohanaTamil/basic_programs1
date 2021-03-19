#include <stdio.h>
void main()
{
    int count=0,i,t,h,e,space;
    char str[100];
    printf("Input the string:");
    scanf(" %[^\n]s",str);
    for (i=0;str[i]!='\0';i++)
    {
        t =(str[i] =='t' || str[i]=='T');
        h =(str[i+1] =='h' || str[i+1]=='H');
        e =(str[i+2]=='e'|| str[i+2]=='E');
        space =(str[i+3]==' ' || str[i+3] =='\0');
        if ((t && h && e && space) == 1)
            count++;
    }
    printf("The frequency of the word 'the' is : %d\n", count);   
}
