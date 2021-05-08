#include<stdio.h>
#include<string.h>
int main()
{
    long int j,n,len ;
    char str[100],t,le[5];

    scanf("%ld",&n);
    
    while(n>0)
    {
        memset(str,0,sizeof(str));
        memset(le,0,sizeof(le));

        gets(str);

        len = strlen(str);

        for(j=0;j<len;j++)
        {
            if(t>='A'&&t<='Z')
                str[j]=str[j]+32;
            t=str[j];
            switch (t)
            {
                case 'a':
                    le[0]++;
                    break;
                case 'e':
                    le[1]++;
                    break;
                case 'i':
                    le[2]++;
                    break;
                case 'o':
                    le[3]++;
                    break;
                case 'u':
                    le[4]++;
                    break;

            }
        }

        printf("a:%d\n",le[0]);
        printf("e:%d\n",le[1]);
        printf("i:%d\n",le[2]);
        printf("o:%d\n",le[3]);
        printf("u:%d\n",le[4]);

        n--;
    }

    return 0;
}
