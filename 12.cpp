/*
��Ŀ����
д��һ�����򣬽���һ���ַ�����Ȼ��������ַ�����ת����ַ��������磺
��������:
����N���ַ�

�������:
������ַ�����ת����ַ���

ʾ��1
����
abcd
���
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
