/*
 *题目描述
按照指定规则对输入的字符串进行处理。

详细描述：

将输入的两个字符串合并。

对合并后的字符串进行排序，要求为：下标为奇数的字符和下标为偶数的字符分别从小到大排序。这里的下标意思是字符在字符串中的位置。

对排序后的字符串进行操作，如果字符为‘0’——‘9’或者‘A’——‘F’或者‘a’——‘f’，则对他们所代表的16进制的数进行BIT倒序的操作，并转换为相应的大写字符。如字符为‘4’，为0100b，则翻转后为0010b，也就是2。转换后的字符为‘2’； 如字符为‘7’，为0111b，则翻转后为1110b，也就是e。转换后的字符为大写‘E’。


举例：输入str1为"dec"，str2为"fab"，合并为“decfab”，分别对“dca”和“efb”进行排序，排序后为“abcedf”，转换后为“5D37BF”

接口设计及说明：

*

功能:字符串处理

输入:两个字符串,需要异常处理

输出:合并处理后的字符串，具体要求参考文档

返回:无

*

void ProcessString(char* str1,char *str2,char * strOutput)

{

}



输入描述:
输入两个字符串

输出描述:
输出转化后的结果

示例1
输入
dec fab
输出
5D37BF
 * */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const string helper1 = "0123456789abcdefABCDEF";
const string helper2 = "084C2A6E195D3B7F5D3B7F";
int main()
{
    string s1,s2,s;
    while(cin >> s1 >> s2)
    {
        s = s1 + s2;
        string str1,str2,str;
        for(int i = 0;i < s.length();i++)
        {
            if(i % 2 == 0)
                str1 += s[i];
            else
                str2 += s[i];
        }
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        for(int i = 0;i < s.length();i++)
        {
            if(i % 2 == 0)
                str += str1[i/2];
            else
                str += str2[i/2];
        }
        for(int i = 0;i < str.length();i++)
        {
            int n = helper1.find(str[i]);
                if(n != -1)
                    str[i] = helper2[n];
        }
        cout << str << endl;
    }
    getchar();
    return 0;
}

