#include<stdio.h>
#include<string.h>
int main()
{
int i,j,len,k,count[26]={0};
char str[100];
printf("Enter the string :\n");
scanf(" %[^\n]s",str);
strupr(str);
len=strlen(str);
for(i=0;i<len;i++)
    {
        if(str[i]>=65&&str[i]<=90)
            count[str[i]-26]++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]==0)
        {
        break;
        }
    }
    if(i==26)
        printf("panagram");
    else
        printf("not panagram");
    return 0;

}
/*#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int x[26]={0},i,n;
char c[100];
scanf(" %[^\n]s",c);
n=strlen(c);
for(i=0;i<n;i++)
{
if(c[i]>=65&&c[i]<=90)
x[c[i]-26]++;
else if(c[i]>=97&&c[i]<=122)
x[c[i]-97]++;
}
for(i=0;i<26;i++)
{
if(x[i]==0)
{
break;
}
}
if(i==26)
{
printf("panagram");
}
else
{
printf("not panagram");
}
return 0;
}
*/
