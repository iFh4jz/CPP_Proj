/*
��Ŀ����
����һ���򵥴����¼����Сģ�飬�ܹ���¼����Ĵ������ڵ��ļ����ƺ��кš�

 

���� 

 

1�� ��¼���8�������¼��ѭ����¼������ͬ�Ĵ����¼�����ļ����ƺ��к���ȫƥ�䣩ֻ��¼һ��������������ӣ�

 

2�� ����16���ַ����ļ����ƣ�ֻ��¼�ļ��������Ч16���ַ���

 

3�� ������ļ����ܴ�·������¼�ļ����Ʋ��ܴ�·����


��������:
һ�л�����ַ�����ÿ�а�����·���ļ����ƣ��кţ��Կո������

�������:
�����еļ�¼ͳ�Ʋ�������������ʽ���ļ��� �������� ��Ŀ��һ���ո�������磺

ʾ��1
����
E:\V1R2\product\fpgadrive.c   1325
���
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
