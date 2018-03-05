/*
题目描述
写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。例如：
输入描述:
输入N个字符

输出描述:
输出该字符串反转后的字符串

示例1
输入
abcd
输出
dcba
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
    {
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
