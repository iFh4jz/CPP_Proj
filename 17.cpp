/*
题目描述
开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。从（0,0）点开始移动，从输入字符串里面读取一些坐标，并将最终输入结果输出到输出文件里面。

 

输入：

 

合法坐标为A(或者D或者W或者S) + 数字（两位以内）

 

坐标之间以;分隔。

 

非法坐标点需要进行丢弃。如AA10;  A1A;  $%$;  YAD; 等。

 

下面是一个简单的例子 如：

 

A10;S20;W10;D30;X;A1A;B10A11;;A10;

 

处理过程：

 

起点（0,0）

 

+   A10   =  （-10,0）

 

+   S20   =  (-10,-20)

 

+   W10  =  (-10,-10)

 

+   D30  =  (20,-10)

 

+   x    =  无效

 

+   A1A   =  无效

 

+   B10A11   =  无效

 

+  一个空 不影响

 

+   A10  =  (10,-10)

 

 

 

结果 （10， -10）


输入描述:
一行字符串

输出描述:
最终坐标，以,分隔

示例1
输入
A10;S20;W10;D30;X;A1A;B10A11;;A10;
输出
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
