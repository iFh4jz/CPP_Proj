/*
 *��Ŀ����
����һ�����֣���������26���ַ�����ɣ���������ַ����ġ�Ư���ȡ�����������ĸ��Ư���ȡ����ܺ͡� 
ÿ����ĸ����һ����Ư���ȡ�����Χ��1��26֮�䡣û���κ�������ĸӵ����ͬ�ġ�Ư���ȡ�����ĸ���Դ�Сд�� 
����������֣�����ÿ�����������ܵġ�Ư���ȡ��� 
��������:
����N������N������

�������:
ÿ�����ƿ��ܵ����Ư���̶�

ʾ��1
����
2
zhangsan
lisi
���
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
