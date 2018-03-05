/*
 *题目描述
题目说明

蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。

 

 

 

样例输入

5

样例输出

1 3 6 10 15

2 5 9 14

4 8 13

7 12

11

接口说明

原型

void GetResult(int Num, char * pResult);

输入参数：

        int Num：输入的正整数N

输出参数：

        int * pResult：指向存放蛇形矩阵的字符串指针

        指针指向的内存区域保证有效

返回值：

        void

 

 

输入描述:
输入正整数N（N不大于100）

输出描述:
输出一个N行的蛇形矩阵。

示例1
输入
4
输出
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
