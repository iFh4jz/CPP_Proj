/*
 *��Ŀ����
ʵ��ɾ���ַ����г��ִ������ٵ��ַ���������ַ����ִ���һ������ɾ�������ɾ����Щ���ʺ���ַ������ַ����������ַ�����ԭ����˳�� 
��������:
�ַ���ֻ����СдӢ����ĸ, �����ǷǷ����룬������ַ�������С�ڵ���20���ֽڡ�

�������:
ɾ���ַ����г��ִ������ٵ��ַ�����ַ�����

ʾ��1
����
abcdd
���
dd
 * */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int a[26]={0};
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            a[s[i]-'a']++;
        }
        int mi=a[s[0]-'a'];//�������ٵ��ַ�����
        for(int i=1;i<n;++i)
        {
            if (a[s[i]-'a']<mi)
            {
                mi=a[s[i]-'a'];//�������ٵ��ַ�����
            }
        }
        for(int i=0;i<n;++i)
        {
            if (a[s[i]-'a']>mi)
                cout<<s[i];      
        }
        cout<<endl;
    }
    return 0;
}
