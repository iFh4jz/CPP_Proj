/*
 *��Ŀ����
��дһ����ȡ�ַ����ĺ���������Ϊһ���ַ������ֽ��������Ϊ���ֽڽ�ȡ���ַ���������Ҫ��֤���ֲ����ذ������"��ABC"4��Ӧ�ý�Ϊ"��AB"������"��ABC��DEF"6��Ӧ�����Ϊ"��ABC"������"��ABC+���İ��"�� 

 

��������:
�������ȡ���ַ���������

�������:
��ȡ����ַ���

ʾ��1
����
��ABC��DEF
6
���
��ABC
 * */

#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    string str;
    while(cin>>str){   //����һ���ַ���
        int n;
        cin>>n;  //�����ֽ���
        for(int i=0;i<n;i++){
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
