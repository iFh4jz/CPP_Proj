/*
题目描述
写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

输入描述:
输入一个有字母和数字以及空格组成的字符串，和一个字符。

输出描述:
输出输入字符串中含有该字符的个数。

示例1
输入
ABCDEF A
输出
1

*/
#include <string>
#include <iostream>
using namespace std;
#define MAX 10000;
int main()
{
    char str[10000];
    cin>>str;
    char s;
    cin>>s;
    int count=0,len,i=0;
    //while(str[i++]!='/0')
    //{len++;}
    for(int k=0;k<1000;k++)
    {
        if(s==str[k])
            count++;
    }
    cout<<count<<endl;
    return 0;
}
