/*
题目描述
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

输入描述:
 输入一个整数（int类型）

输出描述:
 这个数转换成2进制后，输出1的个数

示例1
输入
5
输出
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
