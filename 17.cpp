/*
��Ŀ����
����һ��������㹤�ߣ� A��ʾ�����ƶ���D��ʾ�����ƶ���W��ʾ�����ƶ���S��ʾ�����ƶ����ӣ�0,0���㿪ʼ�ƶ����������ַ��������ȡһЩ���꣬�����������������������ļ����档

 

���룺

 

�Ϸ�����ΪA(����D����W����S) + ���֣���λ���ڣ�

 

����֮����;�ָ���

 

�Ƿ��������Ҫ���ж�������AA10;  A1A;  $%$;  YAD; �ȡ�

 

������һ���򵥵����� �磺

 

A10;S20;W10;D30;X;A1A;B10A11;;A10;

 

������̣�

 

��㣨0,0��

 

+   A10   =  ��-10,0��

 

+   S20   =  (-10,-20)

 

+   W10  =  (-10,-10)

 

+   D30  =  (20,-10)

 

+   x    =  ��Ч

 

+   A1A   =  ��Ч

 

+   B10A11   =  ��Ч

 

+  һ���� ��Ӱ��

 

+   A10  =  (10,-10)

 

 

 

��� ��10�� -10��


��������:
һ���ַ���

�������:
�������꣬��,�ָ�

ʾ��1
����
A10;S20;W10;D30;X;A1A;B10A11;;A10;
���
10,-10
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM (4*1024)
 
void Move(char direction,int num,int *x,int *y)
{
    //printf("%c\n",direction);
    //printf("%d\n",num);
    //printf("%d\n",*x);
    //printf("%d\n",*y);
    //printf("===================\n");
    switch(direction)
    {
        case 'A':
            *x -= num;
            break;
        case 'W':
            *y += num;
            break;
        case 'S':
            *y -= num;
            break;
        case 'D':
            *x += num;
            break;
    }
}
 
int parseMove(char *inputBuf,int *x,int *y)
{
    int i = 0;
    int totalnum = 0;
    int num = 0;
    char moveFlag = 0;
    int flagCnt = 0;
    for(i = 0;i < strlen(inputBuf);i++)
    {
         
        if(inputBuf[i] >= 'A'  && inputBuf[i] <= 'Z')
        {
            flagCnt++;
            continue;
        }
        if(inputBuf[i] >= '0' && inputBuf[i] <= '9')
        {
            //printf("%c %d\n",inputBuf[i],inputBuf[i]);
            num = inputBuf[i] - '0';
            totalnum = totalnum*10+num;
        }
        //printf("totalnum is %d\n",totalnum);
        if(inputBuf[i] == ';')
        {
            if(flagCnt != 1)
            {
                goto clean;
            }
            if(inputBuf[i-2] == 'A' || inputBuf[i-2] == 'S' || inputBuf[i-2] == 'W' || inputBuf[i-2] == 'D')
            {
                moveFlag = inputBuf[i-2];
            }
            else if(inputBuf[i-3] == 'A' || inputBuf[i-3] == 'S' || inputBuf[i-3] == 'W' || inputBuf[i-3] == 'D')
            {
                moveFlag = inputBuf[i-3];
            }
            //printf("totalnum is %d\n",totalnum);
            Move(moveFlag,totalnum,x,y);
            //printf("%d,%d\n",x,y);
             
        clean:
            num = 0;
            totalnum = 0;
            flagCnt = 0;
            moveFlag = 0;
        }
    }
}
int main()
{
    //char inputBuf[NUM] = "A10;S20;W10;D30;X;A1A;B10A11;;A10;";
    char inputBuf[NUM] = {0};
    //char inputBuf[NUM] = "A10;";
     
    while(gets(inputBuf) != NULL)
    {
        int x = 0;
        int y = 0;
        parseMove(inputBuf,&x,&y);
        printf("%d,%d\n",x,y);
    }
}
