/*
 *��Ŀ����
����ָ�������������ַ������д���

��ϸ������

������������ַ����ϲ���

�Ժϲ�����ַ�����������Ҫ��Ϊ���±�Ϊ�������ַ����±�Ϊż�����ַ��ֱ��С��������������±���˼���ַ����ַ����е�λ�á�

���������ַ������в���������ַ�Ϊ��0��������9�����ߡ�A��������F�����ߡ�a��������f������������������16���Ƶ�������BIT����Ĳ�������ת��Ϊ��Ӧ�Ĵ�д�ַ������ַ�Ϊ��4����Ϊ0100b����ת��Ϊ0010b��Ҳ����2��ת������ַ�Ϊ��2���� ���ַ�Ϊ��7����Ϊ0111b����ת��Ϊ1110b��Ҳ����e��ת������ַ�Ϊ��д��E����


����������str1Ϊ"dec"��str2Ϊ"fab"���ϲ�Ϊ��decfab�����ֱ�ԡ�dca���͡�efb���������������Ϊ��abcedf����ת����Ϊ��5D37BF��

�ӿ���Ƽ�˵����

*

����:�ַ�������

����:�����ַ���,��Ҫ�쳣����

���:�ϲ��������ַ���������Ҫ��ο��ĵ�

����:��

*

void ProcessString(char* str1,char *str2,char * strOutput)

{

}



��������:
���������ַ���

�������:
���ת����Ľ��

ʾ��1
����
dec fab
���
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

