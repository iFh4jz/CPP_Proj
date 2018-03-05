/*
题目描述
开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。

 

处理： 

 

1、 记录最多8条错误记录，循环记录，对相同的错误记录（净文件名称和行号完全匹配）只记录一条，错误计数增加；

 

2、 超过16个字符的文件名称，只记录文件的最后有效16个字符；

 

3、 输入的文件可能带路径，记录文件名称不能带路径。


输入描述:
一行或多行字符串。每行包括带路径文件名称，行号，以空格隔开。

输出描述:
将所有的记录统计并将结果输出，格式：文件名 代码行数 数目，一个空格隔开，如：

示例1
输入
E:\V1R2\product\fpgadrive.c   1325
输出
fpgadrive.c 1325 1
 * */

#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>
using namespace std;
 
struct erroNote
{
    string filename;
    string codeline;
    int count = 1;
    bool operator==(const erroNote &a)
    {
        if (a.filename == filename && a.codeline == codeline)
            return true;
        else return false;
    }
};
 
int main()
{
    string str;
    vector<erroNote> ans;
    vector<erroNote>::iterator res;
    while(getline(cin,str))
    //for(int i=0; i<2; i++)
    {
        //getline(cin, str);
        size_t found1 = str.find_last_of('\\');
        size_t found2 = str.find_first_of(' ');
        string s1 = str.substr(found1 + 1, found2 - found1-1);
        erroNote temp;
        if (s1.size() > 16)
        {
            s1 = s1.substr(s1.size() - 16 ,16);
        }
        string s2 = str.substr(found2+1, str.size() - found2);
        temp.filename = s1;
        temp.codeline = s2;
        res = find(ans.begin(), ans.end(), temp);
        if (res == ans.end())
        {
            ans.push_back(temp);
        }
        else
        {
            res->count++;
        }
 
    }
    if (ans.size() >= 8)
    {
        for (int i = ans.size() - 8; i < ans.size(); i++)
        {
            cout << ans[i].filename <<" "<< ans[i].codeline << " "<<ans[i].count<<endl;
        }
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].filename <<" "<< ans[i].codeline << " " << ans[i].count << endl;
        }
    }
 
    return 0;
 
 
}
