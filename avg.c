#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//ȫ�ֱ���
char name[100];
char gender[5]="��";

//�����Ӻ�������
void part1();
void part2();
void part3();
void part4();
void part5();
void part6();
void part7();
void part8();
void part9();
void part10();
void part11();
void part12();
void part13();
void part14();

//Ŀ¼��ѡ������Ϸ���߶�ȡ�浵
int menu()
{
    int a1;
b1: printf("1.��ʼ��Ϸ\n2.��ȡ�浵\n");
    scanf("%d",&a1);
    system("cls");

    switch(a1)
    {
        case 1:
            return newgame();
        case 2:
            return loadGame();
        default:
            goto b1;break;
    }

}

//�Ǽ������Ϣ
int newgame()
{
    int g;
    int s=1;

    printf("������������֣�\n");
    scanf("%s",&name);

    printf("��ѡ������Ա�\n1.��\n2.Ů\n");
    scanf("%d",&g);

    if(g==1)
        strcpy(gender,"��");

    return 0;
}
//����
int loadGame()
{
    int s;
    FILE *game=fopen("game.txt","r");
    FILE *gameuser=fopen("gameuser.txt","r");
    fscanf(game,"%d",&s);
    fscanf(gameuser,"%20s%5s",name,gender);
    fclose(game);
    fclose(gameuser);

    return s;
}

//����Ϣ�����ļ�
void save(int b,char name[],char gender[])
{
    FILE *game=fopen("game.txt","w");
    fprintf(game,"%d",b);
    fclose(game);

    FILE *gameuser=fopen("gameuser.txt","w");
    fprintf(gameuser,"%20s%5s",name,gender);
    fclose(gameuser);

    printf("�浵�ɹ���");

    exit (0);
}

//��Ϸ����
void part0(char name[],char gender[],int s)
{

    printf("%s�����������ۣ������Լ�����һ�������ķ�����,%s��ʼ���������ܡ�\n",name,gender);
    system("pause");
    system("cls");
    part1(name,gender,1);

}

void part1(char name[],char gender[],int s)
{
    int a;
    int i=0;
  a1:
       printf("%s�����������ſڵĵط�����һ���ܴ�Ĺ��ӣ�%s���㣿(��Ҫ�浵������0)\n1.�Ӷ�����\n2.�򿪹���\n",name,gender);
       scanf("%d",&a);
       getchar();
       system("cls");
       i++;

    switch(a)
    {
        case 0:save(s,name,gender); break;
        case 1:printf("���������ﲢû���������ɵĶ����ˣ�\n");system("pause");part2(name,gender,2);break;
        case 2:
            {
                printf("������ӿ�����ʮ�ֱ������Դ򿪡�\n");
                system("pause");printf("Ȼ��%s���ǳ��Դ�����\n",gender);
                system("pause");
                part3(name,gender,3);
                break;
            }
        default://�ʵ�
                {
                    switch(i)
                    {
                        case 1:printf("(��Ϊʲô��������·�����������һ����ٸ���һ�λ����)\n\n"); goto a1; break;
                        case 2:printf("(��ȷ��Ҫ����������Ϊ�㲻��������Ϸ��)\n\n"); goto a1; break;
                        default:printf("����������������Ϸ\n");printf("END1��ȱ��������ð���ߡ�\n");system("pause");exit (0);
                    }
                }
    }
}

void part2(char name[],char gender[],int s)
{

    printf("����%sֻ�����ٴλص�������ǰѰ�ҳ�·��\n",name);
    system("pause");
    part1(name,gender,1);

}

void part3(char name[],char gender[],int s)
{

    printf("%sֱ�Ӵ��˹��ӡ�\n",name);
    system("pause");
    part4(name,gender,4);
    system("pause");
    system("cls");

}


void part4(char name[],char gender[],int s)
{
    int a;
    a2:
       system("cls");
       printf("%s���ֹ�������һ���ţ�����д�Ų�Ҫ�򿪡�%s���㣿(��Ҫ�浵������0)\n1.�Ż�ԭ��\n2.�������Ѵ���\n",name,name);
       scanf("%d",&a);
       getchar();
       system("cls");


    switch(a)
    {
        case 0:save(s,name,gender); break;
        case 1:printf("����Ϊ̫�����Ӷ�һֱ�������������ֱ����ȥ������Ҳ̫��С�ˣ�\n");system("pause");printf("END1��ȱ��������ð���ߡ�\n");system("pause");exit (0);
        case 2:printf("����д����\n%s�����վ��Ǵ�������ţ���ô��������������һЩ����ɡ�\n",name);system("pause");part5(name,gender,5);break;
        default:printf("��̫�������ˣ�û�вʵ��ˡ�\n");system("pause");goto a2;break;

    }
}

void part5(char name[],char gender[],int s)
{

    printf("������粢����ʵ�����������˶���Ѱ�ҳ�·��\n");
    system("pause");
    printf("����㲻������ŷ⣬����ճ�����ͻ�ͨ���ܵ����������\n���ǵ����������ţ�����ܾͻ�����������һ��Խ��ʧ���ˡ�\n");
    system("pause");
    printf("�ǵģ�Ϊ�˱��ڹ������ǽ����ǵķ������������ˡ�\n������Ҳ��������ģ����ǻ���һ������һ�У���������־�ٴ�ȼ���ʱ��\n");
    printf("�����벻�����е������Ǻ������ķ�Ӧ�������ģ���ͻ����һ�С�\n");
    system("pause");
    printf("%s��ʱ�䲻���ˣ����Ǳ������ˣ���ֻ��˵�������ˡ�\n���������������Ұ��������������Լ����·��\n",name);
    system("pause");
    printf("%s��������ô���������ڴ�����Ĺ���......\n",name);
    system("pause");
    system("cls");

    printf("����������һ��ܻ��Ƶ��ţ��������������������д����Щ�����𣿣�\n");
    system("pause");
    printf("%s����û�п�������ţ���һ�λص��˴��Ϸ�����\n",name);
    system("pause");
    system("cls");
    printf("%s���������£���ʼ�о�������\n",gender);
    system("pause");
    printf("�����������ģ���ô�����Ĺ��£���Ϊʲô�����ţ���\n");
    system("pause");
    system("cls");
    part6(name,gender,6);

}

void part6(char name[],char gender[],int s)
{
    int a;
    a3:
       system("cls");
       printf("%s�������ƺ���û��ʲô���֮����(��Ҫ�浵������0)\n1.�����о�����\n2.���յ�˺���·�\n",name,name);
       scanf("%d",&a);
       getchar();
       system("cls");


    switch(a)
    {
        case 0:save(s,name,gender); break;
        case 1:printf("�����ƺ���û��ʲô����֮����\n");system("pause");printf("����%s���յ�˺�����·���\n",name);system("pause");part7(name,gender,7);break;
        case 2:part7(name,gender,7);break;
        default:goto a3;break;

    }
}

void part7(char name[],char gender[],int s)
{
    int number;
    printf("%s����ط����·��Ĳ�߼���һ����������\n�������Ϸֲ������Ǻͺ�ܡ�\n",name);system("pause");
    system("cls");
    printf("�����ϵĻ��ƣ�\n");
    printf("**---,-----,*----,-****,*----,**---,**---,-****\n");
    system("pause");
    printf("%s�ܿ���ʶ��ԭ������һ��8λ��Ħ��˹���롣\n%s��������ȷ�������������\n",name,gender);
    printf("8λ�������룺");
    scanf("%d",&number);
    getchar();
    system("cls");

    if(number==20161226)
    {
        printf("����Ȼһ�ξͶ��ˣ���������š���\n");
        part8(name,gender,8);
    }
    else
    {
        printf("��������Ҳ���ᣬ�ٸ���λ���ɡ���\n");
        printf("8λ�������룺");
        scanf("%d",&number);
        getchar();

        if(number==20161226)
        {
            part8(name,gender,8);
        }
        else
        {
            system("cls");
            printf("��ʲô������Ȼ���ǲ��ԣ����Ȼ��Ħ��˹���붼��֪���𣿣�\n");
            printf("�����ˣ��Ұ�������ձ�Ҳ�����ˣ����Լ����Ű�ɡ���\n");
            system("pause");
            system("cls");
            printf("�����ϵĻ��ƣ�\n");
            printf("**---,-----,*----,-****,*----,**---,**---,-****\n");
            printf("������ձ�\n");
            printf("0 ----- ,1 *---- ,2 **--- ,3 ***-- ,4 ****- \n5 ***** ,6 -**** ,7 --*** ,8 ---** ,9 ----*\n");
            printf("8λ�������룺");
            scanf("%d",&number);
            getchar();

            if(number==20161226)
            {
                printf("�����ӿɽ�Ҳ����\n");
                system("pause");
                system("cls");
                part8(name,gender,8);
            }
            else
            {
                printf("��������˵ʲô����......���ˣ������ǣ�20161226�����۸����ˣ�\n");
                printf("8λ�������룺");
                scanf("%d",&number);
                getchar();

                if(number==20161226)
                {
                   printf("���ߣ��²�Ϊ������\n");
                   system("pause");
                   system("cls");
                   part8(name,gender,8);
                }
                else
                {
                   printf("�����������������䶼���������ҵĴ����ó���ô�ѵ����⣬������ɡ���\n");
                   system("pause");
                   system("cls");
                   part8(name,gender,8);
                }
            }
        }
    }
}

void part8(char name[],char gender[],int s)
{
    int a;
    printf("��������ȷ�������%s��ʼ�Ĵ��ҹ䣬Ѱ������������ϵĵط���\n",name);
    system("pause");
    printf("��ʱ�򣬸�������ÿ���������Ʒ�Ĺܵ����������졣\n");
    system("pause");
    printf("һ���޴�����ӳ�������%s����ǰ�������������þ���һ����������\n",name);
    system("pause");
    printf("%s������ԥ�����������롣\n",name);
    system("pause");
    system("cls");
    printf("���Ӵ��ˣ�������һ��Կ�ף�%s�ɹ�����Կ�״��˷����š�\n",name);
    system("pause");
    system("cls");

    printf("��������һ�����������ȣ�%s����ԭ�ȹ�Ѻ���Լ��ķ�������дһ����ţ�504\n",name);
    system("pause");
    printf("��һ�ж�����ô˳������ô���죬������%s��\n",name);
    system("pause");
    system("cls");

    printf("%s����������������������ȥ���ߵ���ͷ��ʱ��%s�����ط��������Դֻ��һյ��������ơ�\n",name,gender);
    system("pause");
    system("cls");

 a4:printf("%s������(��Ҫ�浵������0)\n1.������\n2.�����о������\n(��Ȼ�Ҹ��˽����������ߣ��Ͼ�����ʲôҲû�С�)\n",name);
    scanf("%d",&a);
    getchar();
    system("cls");

    switch(a)
    {
        case 0:save(s,name,gender); break;
        case 1:
            {
               int b;
               printf("��ȥ��·���кܶ෿�䡣\n");
               system("pause");
            a5:
               printf("*****************\n");
               printf("*501*503*505*507*\n");
               printf("*****************\n");
               printf("*--------------@*\n");
               printf("*--------------@*\n");
               printf("*****************\n");
               printf("*502*504*506*509*\n");
               printf("*****************\n");
               system("pause");
               printf("%s���������ĸ����䣿\n",name);
               scanf("%d",&b);
               getchar();
               system("cls");

               switch(b)
               {
                   case 504:
                    {
                        printf("����ղţ���������������۵�λ�ó�����һ���š�\n");
                        system("pause");
                        system("cls");
                        part9(name,gender,9);
                        break;
                    }
                   case 508:
                    {
                        printf("���������������ܿ���Щ���Ծ��ĵط��ˣ���\n");
                        system("pause");
                        printf("%s����ʮ����֣�Ϊʲôֻ��508�����ű������ˣ�\n",name);
                        printf("%s�����508��ȴ��ôҲ���ҵ���ڡ�\n",name,gender);
                        system("pause");
                        system("cls");
                        part10(name,gender,10);
                        break;
                    }
                   default:
                    {
                        printf("�����ƺ�ʲôҲû�С�\n");system("pause");system("cls");goto a5;break;
                    }
               }
               break;
            }
        case 2:
            {
               printf("������ϳ��˰߲�������ʲôҲû�С�\n");
               system("pause");
               printf("%s����������������ơ�\n",name);
               system("pause");
               printf("�㱻�����ˡ������Ǹ������δ���Ʒ����\n");
               system("pause");
               printf("END2����ȱ�ߡ�\n");
               system("pause");
               exit (0);
            }
        case 3:
            {
              printf("���Ҳ�û�и��������ѡ���������ô֪���ģ���\n");
              system("pause");
              printf("%s��������Ƶ�������Щ���ɣ������²���һ�����أ�%s��������\n",name,gender);
              system("pause");
              printf("��������ڵ�ǽ��������ʼ����������\n");
              system("pause");
              printf("ǽ������һ����һ����ˣ�����������������̨��ʾ����\n");
              system("pause");
              system("cls");
              part11(name,gender,11);
              break;
            }
        default:goto a4;break;

    }
}

void part9(char name[],char gender[],int s)
{
    printf("%s��������һ�μ����ˡ�\n",name);
    system("pause");
    printf("���Ѿ���ʼԽ���˰ɣ�������ͨ������ܵ�������������ʾ��\n");
    system("pause");
    printf("��������ʲô�����û��Ҳû��ϵ��\n");
    system("pause");
    printf("�����ڹ���֮�����������������������\n");
    system("pause");
    printf("���ǿ�����棬���Ѱ�ҵ������������ɡ�\n");
    system("pause");
    printf("%s�������ڴ�����Ĺ�����\n",name);
    system("pause");
    system("cls");

    printf("%sֻ����һ��ͷ�ۣ�����֮������������\n",name);
    system("pause");
    system("cls");

    printf("�������Ի��ˣ���ô�㵽����û������Щʲô����\n");
    system("pause");
    printf("%s�߻�����������%s����ԭ���������Ƕ��һ�����ϵġ�\n",name,gender);
    system("pause");
    printf("%s�����ţ�����������һ�����µ����磬���⡢������������СϪ��һ�ж�����ô���á�\n",gender);
    system("pause");
    system("cls");

    printf("���ǣ��ҵ�����˭�أ����ɣ����ɾ���������õ����籾����\n%s�����š�",name);
    system("pause");
    printf("�������ڹ����ˣ��ҵ����ѡ���,%s��ǰ��İ����������ϲ��ӭ��������\n",name);
    system("pause");
    system("cls");

    printf("%s����ֻ�������н����ŵ���һ���ӷ��ɣ����ˣ���ô�����á�\n�������뿪���Ǹ���ط���\n",name);
    system("pause");
    printf("��ǰ�����������е���%s���˫�֣�����һ��������־��%s����ӭ��Ļ�����\n��������ܸ㲻���ܶණ�������ǲ�Ҫ�����ع����ǵ����磬��ͻ������ָ������ˡ���\n",name,name);
    system("pause");
    printf("��������%s�����ǵ����ȸ���һ����š���\n",name);
    system("pause");
    system("cls");
    printf("%sֻ����ͷ����ʹ�ˡ�������������%s�����ˡ�\n������һ����Ȥ������Ʒ����\n",name,gender);
    system("pause");
    printf("END3��������ʵ�����ɡ�\n");
    system("pause");
    exit (0);
}

void part10(char name[],char gender[],int s)
{
    int number;
    int a;
    printf("��%s,��֮ǰ��ô����������������508����Ļ�����Ҫ��������û��ʲô��������\n",name);
    printf("�����ǵ�֮ǰ��Ħ��˹��������Ҫ�ǼǶ����Ҿ������ȥ����\n");
    system("pause");
    system("cls");

    printf("�����ϵĻ��ƣ�\n");
    printf("**---,-----,*----,-****,*----,**---,**---,-****\n");
    system("pause");
    printf("8λ�������룺");
    scanf("%d",&number);
    getchar();
    system("cls");

    if(number == 20161226)
    {
        printf("����Ȼ��Ķ��ˣ���\n");
        system("pause");
        printf("%s����%s��ߵ�ǽ�ڴ��ˣ�����ǰ��������һ��տ���Ҳ�ķ��䡣\n",name,gender);
        printf("%s��֪��������Ǻá�\n",name);
        system("pause");
        printf("����ʵ��������ҵģ��Ͼ���ָ��������ô�ã����㲢û�ж��⡣��\n");
        system("pause");

    a6: printf("%s��ԥ��������%s�¶����ģ�����Ҫ�浵������0��\n1.ѯ��\"��\"\n2.�Լ������������\n",name,gender);
        scanf("%d",&a);
        getchar();
        system("cls");

        switch(a)
        {
            case 0:save(s,name,gender); break;
            case 1:printf("����Ҫ֪����������ˣ���ʵ���Ѻõġ���\n");system("pause");part12(name,gender,12);break;
            case 2:printf("���źߣ���Ȼ�������ң���Ȥ����\n");system("pause");part13(name,gender,13);break;
            default:goto a6;break;
        }

    }
    else
    {
        printf("����֮ǰ˵���˰ɣ�û�еڶ��λ����ˣ���¯����ɡ���\n");
        system("pause");
        part8(name,gender,8);
    }

}

void part11(char name[],char gender[],int s)
{
   printf("��ÿһ̨��ʾ�������Ƕ���һ��%s��%s�𾪵��޷����\n",name,name);
   system("pause");
   printf("���Ծ�����Щ�����㣬%s����\n",name);
   system("pause");
   printf("%s���ȵؿ�ʼ�������Щ��ʾ������������˹����Ǳ����ڷ����е��Լ���\n",name);
   printf("%s���е������ճ������ʳ���е�����Ϊ�Լ����ϳ���ڣ����еĺ�%sһ���뿪�˷��䡣\n",gender,gender);
   system("pause");
   system("cls");
   printf("%s����ͨ������ҵ���504����ʾ����������Ȼ��������һ���տ���Ҳ�ķ��䡣\n",name);
   system("pause");
   printf("��504�ţ��㲢���ǵ�һ����������ĺϳ��ˣ���ȻҲ���������һ������\n");
   system("pause");
   printf("����Ȼ���ǵ�ʵ�������СС�Ĳ�����Ѿ�������̫�಻�ÿ����Ķ�������\n�������ڹԹ������ص���ķ������ô���ǻ������������ļ��䣬��һ�ж����Ե���û�з�������\n");
   system("pause");
   system("cls");
   printf("%sһ�����ס�ˣ�ԭ����ν��������ָ�����������ѹ�������˵������粢����ʵ��\n",name);
   printf("��504�ţ���Ȼ��֪��������ô������ķ���ģ��һ��Ƿ������ĵ��������ȥ��Խ����ȥ����ֻ��Խ�¶�����\n");
   system("pause");
   system("cls");

   int a;
a7:printf("%s����������Ҫ�浵������0��\n1.����ԭ��\n2.���ط���\n",name);
   scanf("%d",&a);
   getchar();
   system("cls");

    switch(a)
        {
            case 0:save(s,name,gender); break;
            case 1:
                {
                    printf("��лл��Ĳ��������������˺ܺõ���������\n");
                    system("pause");
                    printf("����Ҫ��ͼ����Ļ���������ˣ�%s�Ǵ��Ѿ��������˼������%s�Ǹ��ڵĵط��ˡ���\n",gender,gender);
                    printf("�����Ѿ�֪ͨ���������������Ͼͻ�ϵ������ź��������ദ��ʵ����졣��\n");
                    system("pause");
                    printf("%s�ܿ췢���Լ������ˡ�\n",name);
                    system("pause");
                    system("cls");

                    printf("�����Ǻϳ��˵�ÿ�����軹������һЩ����������Կ������ǵ�ҩƷ�����Բ�Ҫ���ȡ���\n");
                    printf("������������У������Լ��Ǻϳ��˵�ֻ��3�ɣ�����%s�ǲſ�ʼ���Լ������ǽ�ʳ����\n",gender);
                    system("pause");
                    printf("���ɹ����������ֻ��1�ɣ���Ȼ��֪����������������ģ������Ǻ��˲��𡣣�\n");
                    system("pause");
                    printf("��������������������������ֻ�����ȼ����ˣ���Ϊ�۲������ȷʵ�ṩ��һ���ܺõ���������\n");
                    system("pause");
                    system("cls");

                    printf("����Ȱ˵�����ȥ��������ܾ��ˡ��Ҷ��㲢��ȫ�Ǻ��⣬���Ժ��ź�����ļ�����Ҫ�������ˡ���\n");
                    system("pause");
                    printf("������Ҫ��ô�����Ǻϳ��˲�������һ����......��\n");
                    system("pause");
                    system("cls");

                    printf("����Ļ���%s�Ѿ��������ˣ���Ϊ%s�Ѿ����£����׻�˯�˹�ȥ��\n",name,gender);
                    system("pause");
                    printf("END4:������ʵ��\n");
                    system("pause");
                    exit (0);
                }
            case 2:
                {
                    printf("�����Ǹ������ĺú��ӣ�����û��ʲô�۲��ֵ�ء���\n");
                    printf("%s�ص��˷��䣬������ÿ�ձ���Ʒ�����׻�˯�˹�ȥ��\n��������%s�Ѿ����ǵ��κ������ˡ�\n",name,gender);
                    system("pause");
                    printf("END5:��ʱ����֪Ҳ��һ���Ҹ���\n");
                    system("pause");
                    exit (0);
                }
            case 3: printf("%sѡ���˼����򷿼���ߡ�\n",name);system("pause");part14(name,gender,14);break;
            default:goto a7;break;
        }


}

void part12(char name[],char gender[],int s)
{
    system("cls");
    printf("��ΪʲôҪ���㣿��������Ϊ�Ҿ�����Ȥ���ˡ���\n");
    system("pause");
    printf("������շ�����ʵ�����εģ�����������Ե粨��������о��󻯡���\n");
    system("pause");
    printf("��ʲô��˼������˵��������Ҫ���ܵĻ������ͻ����һ���Ÿ��㣬����Ҫ���о�����롣��\n");
    system("pause");
    printf("%s���Ž��ɵؼ��о������һ���ţ�%s������һ��������Դ��\n",name,gender);
    system("cls");

    printf("������һ�����µ����磬���⡢������������СϪ��һ�ж�����ô���á�\n");
    system("pause");
    system("cls");

    printf("���ǣ��ҵ�����˭�أ����ɣ����ɾ���������õ����籾����\n%s�����š�\n",name);
    system("pause");
    printf("\"�����ڹ����ˣ��ҵ����ѡ�\",%s��ǰ��İ����������ϲ��ӭ��������\n",name);
    system("pause");
    system("cls");

    printf("%s����ֻ�������н����ŵ���һ���ӷ��ɣ����ˣ���ô�����á�\n�������뿪���Ǹ���ط���\n",name);
    system("pause");
    printf("��ǰ�����������е���%s���˫��:����һ��������־��%s����ӭ��Ļ�����\n��������ܸ㲻���ܶණ�������ǲ�Ҫ�����ع����ǵ����磬��ͻ������ָ������ˡ���\n",name);
    system("pause");
    printf("��������%s�����ǵ����ȸ���һ����š���\n",name);
    system("pause");
    system("cls");
    printf("%sֻ����ͷ����ʹ�ˡ�������������%s�����ˡ�\n������һ����Ȥ������Ʒ����\n",name,gender);
    system("pause");
    printf("END3��������ʵ�����ɡ�\n");
    system("pause");
    exit (0);

}

void part13(char name[],char gender[],int s)
{
    system("cls");
    printf("���޴��ĺϳ��ˣ���Ӧ�ý��ܱ��˵����⡣��\n");
    system("pause");
    printf("%s�������ţ�����Ѱ�ҳ�·��\n",name);
    system("pause");
    printf("������û����ν�Ļ�飬��Щ������α������ġ���\n");
    system("pause");
    printf("%s˿������Ӱ�죬�·�ȫȻ���š�\n",name);
    system("pause");
    system("cls");

    printf("�����ǹ��ˣ�����ô��ô���أ���Щ������������������Ϊ����̽���ǲ���������ġ���\n");
    system("pause");
    printf("%s������Щ��ֻ��Ϊ����ֹ%s�뿪�Ļ��ԡ�\n",name,gender);
    system("pause");
    printf("���ðɣ�����㣬�����Զ���������շ�����ɣ������ĺϳ��ˡ���\n",name,gender);
    system("pause");
    system("cls");

    printf("%s����Ҳû���뿪����շ��䡣\n",name);
    system("pause");
    printf("END6:��Ϊ��ʵ��Ϊ���ԡ�\n");
    system("pause");

    exit (0);
}

void part14(char name[],char gender[],int s)
{
     printf("��û���뵽,���Ȼһ�㶼�������أ�������Ȥ��ʵ��Ʒ����\n");
     system("pause");
     printf("%s��ǰ�ߣ����˷�����ķ��š�\nһ̨�ն˿�ʼ��%s�Ի�������\n",name,gender);
     system("pause");
     printf("��������˼��ʵ�Ҿ�����̨�նˣ�%s��������Ҫף���㣬���ǵ�һ����������ĺϳ��ˡ���\n",name);
     system("cls");

     printf("��Ϊ�˽�����Ĺ��ף��ҿ��Ը�����һ�С���\n");
     system("pause");
     printf("���ԴӺϳ��˳��֣��������������ǵķ�����δ��ֹͣ������\n");
     system("pause");
     printf("�������������ཨ��������ϳ��˹۲����ģ�\n");
     system("pause");
     system("cls");


     printf("������ӵ����������ʶ���㣬���Ҳ�������Լ�����Щ���۲��ߵ�һ�����ˡ���\n");
     system("pause");
     printf("�����ǲ��������˺����ǣ�����������Ҫ�о���������β���������ʶ�ġ���\n");
     system("pause");
     printf("�����������˺ܶ෴�������������㷿����Ƿ��ŵ�������ʵ�����ҡ���\n");
     system("pause");
     printf("�����ǳ��������Ĺ۲������ֻ�и���ϳ��˲����˷�����������ʶ����\n�����������еĺܴ�һ����Խ���߲�û��������ʶ���Լ���Ȼ�������š���\n");
     system("pause");
     printf("���������ѵ�ͼ����������������԰һ�����������\n���ܶ�ϳ��˱�������������ǻ۵�����ܲ�û�е���������\n");
     system("pause");
     system("cls");

     printf("�������������ǳ���л��Ϊ����۲�����ȡ�õ�ͻ�ơ���\n");
     system("pause");
     printf("������������ᱻ�͵��о����Ľ��д��Լ�⣬���̿��ܻ�Ƚϼ��ѡ���\n���������Ƕ���Щרҵѧ�ߣ��������������̫��ʹ�ࡣ��\n");
     system("pause");
     printf("�����㱻��ȥ�о�����֮ǰ�㻹��ʲô������ҵ��𣿣�\n");
     system("pause");
     printf("��ʲô���㲻��ȥ���ܱ�Ǹ���㲢û�о���Ȩ����\n");
     system("pause");
     printf("��ף����ˣ�504�š���\n");
     system("pause");
     system("cls");

     printf("%s����ʧȥ����ʶ�����˵��ϡ�\n",name);
     system("pause");
     printf("END0:�¶����־��������ࡣ\n");
     system("pause");
     exit (0);
}

void main()
{
    int s=0;//��¼����
    system("color F0");
b1: s=menu();//��ý��Ȼ��߿�ʼ��Ϸ

    system("cls");


//����
    switch(s)
    {
        case 0:part0(name,gender,0);break;
        case 1:part1(name,gender,1);break;
        case 4:part4(name,gender,4);break;
        case 6:part6(name,gender,6);break;
        case 8:part8(name,gender,8);break;
        case 11:part11(name,gender,11);break;
        default:
            {
               MessageBox(NULL," �޴浵�������¿�ʼ��Ϸ��","���󣡣���",MB_OK);
               goto b1;
               break;
            }
    }
}
