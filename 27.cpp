/*
 *题目描述
编写一个程序，将输入字符串中的字符按如下规则排序。

规则 1 ：英文字母从 A 到 Z 排列，不区分大小写。

       如，输入： Type   输出： epTy

规则 2 ：同一个英文字母的大小写同时存在时，按照输入顺序排列。

     如，输入： BabA   输出： aABb

规则 3 ：非英文字母的其它字符保持原来的位置。

     如，输入： By?e   输出： Be?y

样例：

    输入：

   A Famous Saying: Much Ado About Nothing(2012/8).

    输出：

   A  aaAAbc   dFgghh :  iimM   nNn   oooos   Sttuuuy  (2012/8).


输入描述:


输出描述:


示例1
输入
A Famous Saying: Much Ado About Nothing (2012/8).
输出
A aaAAbc dFgghh: iimM nNn oooos Sttuuuy (2012/8).
 * */

#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main()
{
    string str;
    while (cin >> str)
    {
        //vector<char> a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
        //vector<vector<char>> result;
        vector<char> result_final;
        for(int j=0; j<26; j++)
        {
            for(int i=0; i<str.size(); i++)
            {
                if(str[i]-'a'==j||str[i]-'A'==j)
                {
                    result_final.push_back(str[i]);
                }
            }
        }
         
        int M = 0;
        for (int i = 0; i<str.size(); i++)
        {
            if ((str[i] >= 'A'&&str[i] <= 'Z') || (str[i] >= 'a'&&str[i] <= 'z'))
            {
                if (M<result_final.size())
                {
                    cout << result_final[M];
                    M++;
                }
            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
