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

//-----------------�������ʼ��----------------
void Welcome();

struct System_Data * Initialization();//������������

void menu(struct System_Data *head);//ϵͳ�˵�

void Data_input(struct System_Data *head);//���ݶ�ȡ

void Check(struct System_Data *head);//��Ʊ��ѯ

struct System_Data *Check_Flight_Number(struct System_Data *p);//������Ų�ѯ

struct System_Data *Check_Take_Off(struct System_Data *p, struct System_Data *Ans);//������ѯ

struct System_Data *Check_Land(struct System_Data *p, struct System_Data *Ans);//���յ��ѯ

struct System_Data *Check_Time_Cost(struct System_Data *p, struct System_Data *Ans);//������ʱ���ѯ

void Print(struct System_Data *Ans,struct System_Data *head);

void print(struct System_Data *Ans,struct System_Data *head);//ȫ����Ʊ�������

void Back(struct System_Data *head);

void Copy(struct System_Data *p,struct System_Data *t);

int Flights_Count; //������

//--------------------------------------------

int main()
{
    //Welcome();//��ӭ����

    //Sleep(3000);
    //system("cls");

    //��ʼ��
    struct System_Data *head;
    head=Initialization();

    menu(head);//�˵�

    system("pause");

    return 0;
}

void Welcome()
{
    printf("**************************\n");
    printf("*  ��ӭ���뺽�ඩƱϵͳ  *\n");
    printf("**************************\n");
    Sleep(1500);
    system("cls");

    printf("**********************\n");
    printf("*       ����         *\n");
    printf("**********************\n");
    printf("*       �ڼ���       *\n");
    printf("*       �ſ�Դ       *\n");
    printf("*       �¾���       *\n");
    printf("*       ��С��       *\n");
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
    printf("*       �񺽶�Ʊϵͳ        *\n");
    printf("*      1.������Ϣ¼��/����  *\n");
    printf("*      2.��ѯ������Ϣ       *\n");
    printf("*      0.�� �� ϵ ͳ        *\n");
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
            printf("�Ƿ�����");
            exit(-1);
    }
}

void Data_input(struct System_Data *head)
{
    Flights_Count=0;
    FILE *Data;//�����ļ�ָ��
    char FileName[100] = "C:\\Users\\UDK_KL\\iCloudDrive\\���������ĩ��ҵ\\ai.txt";

    Data = fopen(FileName, "r");

    if (!Data)
    {
        printf("�����ļ�������\n");
        system("pause");
        menu(head);
    }
    else
    {
        char Top_Line[100];

        struct System_Data *p=head;

        fgets(Top_Line, 100, Data);//��ȡ��һ��˵��

        while (!feof(Data))
        {
            struct System_Data *t = (struct System_Data *)malloc(sizeof(struct System_Data));

            //��ȡ��Ϣ;
            fscanf(Data, "%s %s %s %lf %s %d %d",t->Flight_Number,t->Take_Off,t->Land,&t->Time_Cost,t->Model,&t->Price,&t->Tickets_Left);

            t->Next=NULL;

            p->Next=t;
            p=t;
            Flights_Count++;
        }

        Flights_Count-=1;
        printf("������Ϣ�ѵ���ɹ������ι�����%d��������Ϣ\n",Flights_Count);

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
        printf("δ��⵽�������ݣ����ȵ��뺽��\n");
        Back(head);
    }
    printf("*****************************\n");
    printf("*       �������ѯ��ʽ      *\n");
    printf("*****************************\n");
    printf("*        1.�����           *\n");
    printf("*        2.���վ           *\n");
    printf("*        3.�յ�վ           *\n");
    printf("*        4.����ʱ��         *\n");
    printf("*        0.�������˵�       *\n");
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
            printf("�Ƿ�����");
    }
}

struct System_Data *Check_Flight_Number(struct System_Data *head)//������Ų�ѯ
{
    printf("�����뺽��ţ�\n");
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
    printf("δ��ѯ�����\n");
    Back(head);
}

struct System_Data *Check_Take_Off(struct System_Data *head, struct System_Data *Ans)//������ѯ
{
    printf("��������㣺\n");
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
        printf("δ��ѯ�����\n");
        Back(head);
    }
    else
        return Ans;
}

struct System_Data *Check_Land(struct System_Data *head, struct System_Data *Ans)//���յ��ѯ
{
    printf("�������յ㣺\n");
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
        printf("δ��ѯ�����\n");
        Back(head);
    }
    else
        return Ans;
}

struct System_Data *Check_Time_Cost(struct System_Data *head, struct System_Data *Ans)//������ʱ���ѯ
{
    printf("���������ʱ�䣺\n");
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
        printf("δ��ѯ�����\n");
        Back(head);
    }
    else
        return Ans;
}

void Print(struct System_Data *p,struct System_Data *head)
{
    system("cls");
    printf("���Ĳ�ѯ���Ϊ��\n\n");
    printf("�����\t���\t�յ�\t����ʱ��(Сʱ)  ����\t�۸�\t��Ʊ��\n");

    printf("%s\t%s\t%s\t   %.2lf   \t%s\t%d\t  %d\n",p->Flight_Number,p->Take_Off,p->Land,p->Time_Cost,p->Model,p->Price,p->Tickets_Left);
    free(p);
    Back(head);
}

void print(struct System_Data *Ans,struct System_Data *head)
{
    struct System_Data *p=Ans->Next;
    struct System_Data *F=Ans;
    free(F);//�ͷ��ڴ�

    system("cls");

    printf("���Ĳ�ѯ���Ϊ��\n\n");
    printf("�����\t���\t�յ�\t����ʱ��(Сʱ)  ����\t�۸�\t��Ʊ��\n");
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

    printf("\n����0�˳�ϵͳ\n����1�ص����˵�\n");
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
        printf("�Ƿ�����");
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
