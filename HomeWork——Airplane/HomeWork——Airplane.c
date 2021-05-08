#include<stdio.h>
#include<windows.h>
#include<string.h>

struct System_Data
{
    char Flight_Number[20];
    char Take_Off[20];
    double Time_Cost;
    char Land[20];
    int Price;
    char Model[10];
    int Tickets_Left;
    struct System_Data *Next;

};

//-----------------函数与初始化----------------
void Welcome();

struct System_Data * Initialization();//创建数据链表

void menu(struct System_Data *head);//系统菜单

void Data_input(struct System_Data *head);//数据读取

void Check(struct System_Data *head);//机票查询

struct System_Data *Check_Flight_Number(struct System_Data *p);//按航班号查询

struct System_Data *Check_Take_Off(struct System_Data *p, struct System_Data *Ans);//按起点查询

struct System_Data *Check_Land(struct System_Data *p, struct System_Data *Ans);//按终点查询

struct System_Data *Check_Time_Cost(struct System_Data *p, struct System_Data *Ans);//按飞行时间查询

void Print(struct System_Data *Ans,struct System_Data *head);

void print(struct System_Data *Ans,struct System_Data *head);//全部机票数据输出

void Back(struct System_Data *head);

void Copy(struct System_Data *p,struct System_Data *t);

int Flights_Count; //航班数

//--------------------------------------------

int main()
{
    //Welcome();//欢迎界面

    //Sleep(3000);
    //system("cls");

    //初始化
    struct System_Data *head;
    head=Initialization();

    menu(head);//菜单

    system("pause");

    return 0;
}

void Welcome()
{
    printf("**************************\n");
    printf("*  欢迎进入航班订票系统  *\n");
    printf("**************************\n");
    Sleep(1500);
    system("cls");

    printf("**********************\n");
    printf("*       作者         *\n");
    printf("**********************\n");
    printf("*       第几组       *\n");
    printf("*       张开源       *\n");
    printf("*       陈景瑞       *\n");
    printf("*       吴小云       *\n");
    printf("**********************\n");
}

struct System_Data *Initialization()
{
    struct System_Data *head=(struct System_Data*)malloc(sizeof(struct System_Data));
    head->Next=NULL;

    return head;
}

void menu(struct System_Data *head)
{
    int select;
    printf("*****************************\n");
    printf("*       民航订票系统        *\n");
    printf("*      1.航班信息录入/更新  *\n");
    printf("*      2.查询航线信息       *\n");
    printf("*      0.退 出 系 统        *\n");
    printf("*****************************\n");


    scanf("%d",&select);
    switch(select)
    {
        case 1:
            system("cls");
            Data_input(head);
        case 2:
            Check(head);
        case 0:
            exit(1);
        case -1:
            print(head,head);
        default:
            printf("非法输入");
            exit(-1);
    }
}

void Data_input(struct System_Data *head)
{
    Flights_Count=0;
    FILE *Data;//定义文件指针
    char FileName[100] = "C:\\Users\\UDK_KL\\iCloudDrive\\程序设计期末作业\\ai.txt";

    Data = fopen(FileName, "r");

    if (!Data)
    {
        printf("航班文件不存在\n");
        system("pause");
        menu(head);
    }
    else
    {
        char Top_Line[100];

        struct System_Data *p=head;

        fgets(Top_Line, 100, Data);//读取第一行说明

        while (!feof(Data))
        {
            struct System_Data *t = (struct System_Data *)malloc(sizeof(struct System_Data));

            //读取信息;
            fscanf(Data, "%s %s %s %lf %s %d %d",t->Flight_Number,t->Take_Off,t->Land,&t->Time_Cost,t->Model,&t->Price,&t->Tickets_Left);

            t->Next=NULL;

            p->Next=t;
            p=t;
            Flights_Count++;
        }

        Flights_Count-=1;
        printf("航班信息已导入成功，本次共导入%d条航班信息\n",Flights_Count);

        //  Sleep(1000);
        fclose(Data);
        menu(head);
    }

}

void Check(struct System_Data *head)
{
    system("cls");

    struct System_Data *Ans=(struct System_Data*)malloc(sizeof(struct System_Data));

    if(Flights_Count==0)
    {
        printf("未检测到航班数据，请先导入航线\n");
        Back(head);
    }
    printf("*****************************\n");
    printf("*       请输入查询方式      *\n");
    printf("*****************************\n");
    printf("*        1.航班号           *\n");
    printf("*        2.起点站           *\n");
    printf("*        3.终点站           *\n");
    printf("*        4.飞行时间         *\n");
    printf("*        0.返回主菜单       *\n");
    printf("*****************************\n");

    int sel;

    scanf("%d",&sel);

    switch(sel)
    {
        case 0:
            menu(head);
            break;
        case 1:
            Print(Check_Flight_Number(head),head);
            break;
        case 2:
            print(Check_Take_Off(head,Ans),head);

            break;
        case 3:
            print(Check_Land(head, Ans),head);
            break;
        case 4:
            print(Check_Time_Cost(head, Ans),head);
            break;
        case -1:
            print(head,head);
            break;
        default:
            printf("非法输入");
    }
}

struct System_Data *Check_Flight_Number(struct System_Data *head)//按航班号查询
{
    printf("请输入航班号：\n");
    struct System_Data *p=head->Next;

    char Number[10];
    scanf("%s",Number);
    while(p)
    {
        if(!strcmp(p->Flight_Number,Number))
        {
            struct System_Data *t=(struct System_Data *)malloc(sizeof(struct System_Data));

            Copy(p,t);

            t->Next=NULL;
            return t;
        }
        p=p->Next;
    }
    system("cls");
    printf("未查询到结果\n");
    Back(head);
}

struct System_Data *Check_Take_Off(struct System_Data *head, struct System_Data *Ans)//按起点查询
{
    printf("请输入起点：\n");
    int flag=0;
    struct System_Data *p=head->Next;

    struct System_Data *Ap=Ans;
    Ap->Next=NULL;

    char Place[30]= {0};
    getchar();
    gets(Place);

    while(p)
    {
        if(!strcmp(p->Take_Off,Place))
        {
            struct System_Data *t =(struct System_Data*)malloc(sizeof(struct System_Data));
            *t=*p;

            t->Next=NULL;
            Ap->Next= t;
            Ap=t;

            flag=1;
        }
        p=p->Next;
    }

    if(flag==0)
    {
        system("cls");
        printf("未查询到结果\n");
        Back(head);
    }
    else
        return Ans;
}

struct System_Data *Check_Land(struct System_Data *head, struct System_Data *Ans)//按终点查询
{
    printf("请输入终点：\n");
    int flag=0;
    struct System_Data *p=head->Next;

    struct System_Data *Ap=Ans;
    Ap->Next=NULL;

    char Place[30]= {0};
    getchar();
    gets(Place);

    while(p)
    {
        if(!strcmp(p->Land,Place))
        {
            struct System_Data *t =(struct System_Data*)malloc(sizeof(struct System_Data));
            *t=*p;

            t->Next=NULL;
            Ap->Next= t;
            Ap=t;

            flag=1;
        }
        p=p->Next;
    }

    if(flag==0)
    {
        system("cls");
        printf("未查询到结果\n");
        Back(head);
    }
    else
        return Ans;
}

struct System_Data *Check_Time_Cost(struct System_Data *head, struct System_Data *Ans)//按飞行时间查询
{
    printf("请输入飞行时间：\n");
    int flag=0;
    struct System_Data *p=head->Next;

    struct System_Data *Ap=Ans;
    Ap->Next=NULL;

    double Time;
    scanf("%lf",&Time);

    while(p)
    {
        if(p->Time_Cost==Time)
        {
            struct System_Data *t =(struct System_Data*)malloc(sizeof(struct System_Data));
            *t=*p;

            t->Next=NULL;
            Ap->Next= t;
            Ap=t;

            flag=1;
        }
        p=p->Next;
    }

    if(flag==0)
    {
        system("cls");
        printf("未查询到结果\n");
        Back(head);
    }
    else
        return Ans;
}

void Print(struct System_Data *p,struct System_Data *head)
{
    system("cls");
    printf("您的查询结果为：\n\n");
    printf("航班号\t起点\t终点\t飞行时间(小时)  机型\t价格\t余票量\n");

    printf("%s\t%s\t%s\t   %.2lf   \t%s\t%d\t  %d\n",p->Flight_Number,p->Take_Off,p->Land,p->Time_Cost,p->Model,p->Price,p->Tickets_Left);
    free(p);
    Back(head);
}

void print(struct System_Data *Ans,struct System_Data *head)
{
    struct System_Data *p=Ans->Next;
    struct System_Data *F=Ans;
    free(F);//释放内存

    system("cls");

    printf("您的查询结果为：\n\n");
    printf("航班号\t起点\t终点\t飞行时间(小时)  机型\t价格\t余票量\n");
    while(p)
    {
        F=p;
        printf("%s\t%s\t%s\t   %.2lf   \t%s\t%d\t  %d\n",p->Flight_Number,p->Take_Off,p->Land,p->Time_Cost,p->Model,p->Price,p->Tickets_Left);
        p=p->Next;
        free(F);
    }

    Sleep(1000);

    menu(head);
}


void Back(struct System_Data *head)
{
    int sel;

    printf("\n输入0退出系统\n输入1回到主菜单\n");
    scanf("%d",&sel);
    if(sel==0)
        exit(0);

    else if(sel==1)
    {
        getchar();
        system("cls");
        menu(head);
    }
    else
    {
        printf("非法输入");
        exit(-1);
    }
}

void Copy(struct System_Data *p,struct System_Data *t)
{
    strcpy(t->Flight_Number,p->Flight_Number);
    strcpy(t->Take_Off,p->Take_Off);
    t->Time_Cost=p->Time_Cost;
    strcpy(t->Land,p->Land);
    t->Price=p->Price;
    strcpy(t->Model,p->Model);
    t->Tickets_Left=p->Tickets_Left;
}
