/*
��Ŀ����
����һ��int�͵����������������int���������ڴ��д洢ʱ1�ĸ�����

��������:
 ����һ��������int���ͣ�

�������:
 �����ת����2���ƺ����1�ĸ���

ʾ��1
����
5
���
2
*/
#include<iostream>
using namespace std;
  
int main()
{
    int a,count;
    cin >> a;
     
    count = 0;
    while(a>0)
    {
        if(a&1)
            count++;
        a >>= 1;
    }
    cout << count << endl;
}
