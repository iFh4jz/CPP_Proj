/*
 *题目描述
给出一个名字，该名字有26个字符串组成，定义这个字符串的“漂亮度”是其所有字母“漂亮度”的总和。 
每个字母都有一个“漂亮度”，范围在1到26之间。没有任何两个字母拥有相同的“漂亮度”。字母忽略大小写。 
给出多个名字，计算每个名字最大可能的“漂亮度”。 
输入描述:
整数N，后续N个名字

输出描述:
每个名称可能的最大漂亮程度

示例1
输入
2
zhangsan
lisi
输出
192
101
 * */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
string tansform(string inputstr)
{
    string outputstr;
    for(int i=0;i<inputstr.length ();i++)
    {
        if(inputstr[i]>=65&&inputstr[i]<=90)
            inputstr[i]=inputstr[i]+32;
        else
            continue;
    }
 
    return inputstr;
}
 
int main()
{
    vector<int> a;
    int book[26]={0},sum[1000]={0},k=26;
    string strtemp,strtemp1;
    int i,j;
    int n;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            strtemp="";
            strtemp1="";
            for(j=0;j<26;j++)
                book[j]=0;
            k=26;
            a.clear ();
             
            cin>>strtemp;
             
            strtemp1=tansform(strtemp);
             
            for(j=0;j<strtemp1.length ();j++)
            {
                book[strtemp1[j]-97]++;
            }
             
            for(j=0;j<26;j++)
            {
                if(book[j]>0)
                    a.push_back(book[j]);
            }
             
            sort(a.begin (),a.end ());
            reverse(a.begin(),a.end());
             
            for(int l=0;l<a.size ();l++)
            {
                sum[i]=sum[i]+a[l]*k;
                k--;
            }
        }
 
    for(int m=1;m<=n;m++)
            cout<<sum[m]<<endl;
    for(j=0;j<1000;j++)
            sum[j]=0;
    }
    return 0;
}
