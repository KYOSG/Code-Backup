
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char s[3][110],t[110];
    for(i=0;i<3;i++)
        scanf("%s",s[i]);
    for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
    for(i=0;i<3;i++)
    {
        if(i==2) printf("%s\n",s[i]);
        else printf("%s ",s[i]);
    }
    return 0;
}
