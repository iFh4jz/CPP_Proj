/*
题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)。不在范围内的不作统计。

输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。

示例1
输入
abc
输出
3
*/
#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char input[10000]={0};
    char flag[128]={0};
     
    while(cin.getline(input,10000)!=NULL)
    { 
       int i=0;
       //int num_flag=0;
       while(1)
       {
          if (input[i]=='\0')
          break;
           else if (input[i]>=0 && input[i]<=127)
           flag[input[i]]=flag[input[i]]+1;
           i++;           
       }
     
       int count=0;
       for(int j=0;j<128;j++)
           if(flag[j]!=0)
               count++;
            
            
        cout<<count<<endl;
                
    }
    return 0;
}
