/*
 *��Ŀ����
Lily�Ͽ�ʱʹ����ĸ����ͼƬ��С������ѧϰӢ�ﵥ�ʣ�ÿ�ζ���Ҫ����ЩͼƬ���մ�С��ASCII��ֵ��С���������պá����Ҹ�Lily��æ��ͨ��C���Խ����

 


��������:
Lilyʹ�õ�ͼƬ����"A"��"Z"��"a"��"z"��"0"��"9"��������ĸ�����ָ���������1024��

�������:
Lily������ͼƬ���մ�С�����˳�����

ʾ��1
����
Ihave1nose2hands10fingers
���
0112Iaadeeefghhinnnorsssv
 * */

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
 
using namespace std;
 
 
int main(){
    string s;
    while(cin>>s){
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
     
     
    return 0;
}

