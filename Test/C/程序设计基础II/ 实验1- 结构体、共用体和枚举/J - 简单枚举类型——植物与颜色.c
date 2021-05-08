#include <stdio.h>
#include <string.h>
enum color
{
    red,orange,yellow,green,blue,violet,no
};
int main()
{
    enum color a;
    char s[35];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(strcmp(s,"red")==0) a=red;
        else if(strcmp(s,"orange")==0) a=orange;
        else if(strcmp(s,"yellow")==0) a=yellow;
        else if(strcmp(s,"green")==0) a=green;
        else if(strcmp(s,"blue")==0) a=blue;
        else if(strcmp(s,"violet")==0) a=violet;
        else a = no;

        switch(a)
        {
            case 0: printf("Rose are red.\n");
                break;
            case 1: printf("Poppies are orange.\n");
                break;
            case 2: printf("Sunflower are yellow.\n");
                break;
            case 3: printf("Grass are green.\n");
                break;
            case 4: printf("Bluebells are blue.\n");
                break;
            case 5: printf("Violets are violet.\n");
                break;
            case 6: printf("I don't know about the color %s.\n", s);
                break;
        }
    }
    return 0;
}
