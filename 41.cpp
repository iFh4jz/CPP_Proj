/*
 *题目描述
现有一组砝码，重量互不相等，分别为m1,m2,m3…mn；
每种砝码对应的数量为x1,x2,x3...xn。现在要用这些砝码去称物体的重量，问能称出多少中不同的重量。

 

注：

称重重量包括0

 

方法原型：public static int fama(int n, int[] weight, int[] nums)



输入描述:
输入包含多组测试数据。

对于每组测试数据：

第一行：n --- 砝码数(范围[1,10])

第二行：m1 m2 m3 ... mn --- 每个砝码的重量(范围[1,2000])

第三行：x1 x2 x3 .... xn --- 每个砝码的数量(范围[1,6])
输出描述:
利用给定的砝码可以称出的不同的重量数

示例1
输入
2
1 2
2 1
输出
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
