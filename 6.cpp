/*
��Ŀ����
����:����һ�������������մ�С�����˳����������������������ӣ���180����������Ϊ2 2 3 3 5 ��

���һ��������ҲҪ�пո�

��ϸ������


�����ӿ�˵����

public String getResult(long ulDataInput)

���������

long ulDataInput�������������

����ֵ��

String



��������:
����һ��long������

�������:
���մ�С�����˳����������������������ӣ��Կո���������һ��������ҲҪ�пո�

ʾ��1
����
180
���
2 2 3 3 5
*/

#include <iostream>
using namespace std;
 
int main()
{
   long num;
   cin>>num;
   while(num!=1)
   {    
     for(int i=2;i<=num;i++)
     {
       if(num%i==0)
       {
          num=num/i;
          cout<<i<<' ';
          break;
       }
    }
        
   }
    
    return 0;
}
