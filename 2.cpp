/*
��Ŀ����
д��һ�����򣬽���һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд��

��������:
����һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ���

�������:
��������ַ����к��и��ַ��ĸ�����

ʾ��1
����
ABCDEF A
���
1

*/
#include <string>
#include <iostream>
using namespace std;
#define MAX 10000;
int main()
{
    char str[10000];
    cin>>str;
    char s;
    cin>>s;
    int count=0,len,i=0;
    //while(str[i++]!='/0')
    //{len++;}
    for(int k=0;k<1000;k++)
    {
        if(s==str[k])
            count++;
    }
    cout<<count<<endl;
    return 0;
}
