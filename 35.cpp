/*
 *��Ŀ����
��Ŀ˵��

���ξ�������1��ʼ����Ȼ���������гɵ�һ�������������Ρ�

 

 

 

��������

5

�������

1 3 6 10 15

2 5 9 14

4 8 13

7 12

11

�ӿ�˵��

ԭ��

void GetResult(int Num, char * pResult);

���������

        int Num�������������N

���������

        int * pResult��ָ�������ξ�����ַ���ָ��

        ָ��ָ����ڴ�����֤��Ч

����ֵ��

        void

 

 

��������:
����������N��N������100��

�������:
���һ��N�е����ξ���

ʾ��1
����
4
���
1 3 6 10
2 5 9
4 8
7
 * */

#include<iostream>
using namespace std;
 
int main()
{
    int i,j,num,k,N;
     
    while(cin >> N)
    {
        num = 1;
        for(i=0;i<N;i++)
        {
            num += i;
 
            k = num;
            for(j=0;j<N-i;j++)
            {
                cout << k;
                if(j!=N-i-1)
                    cout << ' ';
                else
                    cout << endl;
                k += i+2+j;
            }
        }
    }
 
}
