/*
题目描述
描述：

输入一个整数，将这个整数以字符串的形式逆序输出

程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

 

输入描述:
输入一个int整数

输出描述:
将这个整数以字符串的形式逆序输出

示例1
输入
1516000
输出
0006151
*/

#include <stdio.h>
//#include <string.h>
int main(void)
{
    int i, k;
    scanf("%d", &k);
    if (k == 0)
        printf("%d", k);
    while(k!=0)
    {
        i = k % 10;
        printf("%d", i);
        k = k / 10;
    }
    return 0;
 
}
