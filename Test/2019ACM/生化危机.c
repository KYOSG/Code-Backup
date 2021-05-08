/*
 Description

 由于BHS公司制造了一种病毒，这种病毒可以将死去的人们，变成丧尸，这个公司通过贩卖这种病毒，来获取巨大的利益，而正义的ljj当然会阻止这种行为，在行动中由于失误，将这种病毒泄露了，从而感染了全球。将地球划分成一个由方格组成的地图，包含两个大写字母 W (代表未被感染的地区),B(代表感染的地区)，为了让问题变得简单，一开始地球中所有地区都是未被感染的，病毒从一个中心往四周泄露，以正方形进行散，最终正方形边长是奇数，你能帮助 ljj 找到这个中心吗？
 Input

 输入一个整数N，代表地图一共有N行 (1<= N <=115)

 然后输入N行字符串，每行保证长度一致为M（1 <= M <= 115）

 N行M列中包含两个字母(W,B)分别表示未感染的地区、感染的地区。
 Output

 输出两个整数，x,y(1<=x<=N,1<=y<=M)代表病毒中心的位置。
 Sample

 Input

 5

 WWBBBW

 WWBBBW

 WWBBBW

 WWWWWW

 WWWWWW
 Output

 2 4
 */
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,up=0,left=0,down=0,right=0;
    char str[115][115];
    int x,y;
    long int len;
    scanf("%d",&n);
    getchar();//吃回车

    for(i=0;i<n;i++)
    {
        gets(str[i]);//自动换列
        //scanf("%s",str[i]);也可
    }
    len = strlen(str[0]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<len;j++)
        {
            if (str[i][j]=='B')
            {
                if (!up && !left)//! 代表值得取反，对于整形变量，只要不为0，使用 ! 取反都是0，0取反就是1
                {
                    left = j+1;
                    up = i+1;
                }
                right = j + 1;
                down = i+1;
            }
            //循环结束后便记录下了最后一个点的位置
        }
    }

    x=(right+left)/2;
    y=(down+up)/2;

   printf("%d %d\n",y,x);

    return 0;
}
