/*
��Ŀ����
��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ���ACSII�뷶Χ��(0~127)�����ڷ�Χ�ڵĲ���ͳ�ơ�

��������:
����N���ַ����ַ���ACSII�뷶Χ�ڡ�

�������:
�����Χ��(0~127)�ַ��ĸ�����

ʾ��1
����
abc
���
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
