/*
 *��Ŀ����
����һ�����룬����������ȣ��ֱ�Ϊm1,m2,m3��mn��
ÿ�������Ӧ������Ϊx1,x2,x3...xn������Ҫ����Щ����ȥ����������������ܳƳ������в�ͬ��������

 

ע��

������������0

 

����ԭ�ͣ�public static int fama(int n, int[] weight, int[] nums)



��������:
�����������������ݡ�

����ÿ��������ݣ�

��һ�У�n --- ������(��Χ[1,10])

�ڶ��У�m1 m2 m3 ... mn --- ÿ�����������(��Χ[1,2000])

�����У�x1 x2 x3 .... xn --- ÿ�����������(��Χ[1,6])
�������:
���ø�����������ԳƳ��Ĳ�ͬ��������

ʾ��1
����
2
1 2
2 1
���
5
 * */

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        int w1[10]={0};
        int num1[10]={0};
        int max1=0;
        for(int i=0;i<N;i++)
        {
            cin>>w1[i];
        }
        for(int i=0;i<N;i++)
        {
            cin>>num1[i];
        }   
        for(int i=0;i<N;i++)
        {
            max1+=w1[i]*num1[i];  
        }
        int v[120000]={0};
        v[0]=1;
        for(int i=0;i<N;i++)
        {
            for(int j=max1;j>=0;j--)
            {
                for(int k=1;k<=num1[i];k++)
                {
                    if(v[j]==1)
                    {
                        v[j+k*w1[i]]=1;
                    }
                }
            }
        }
        int num=0;
        for(int i=0;i<=max1;i++)
        {
            if(v[i])
            {
                num++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
