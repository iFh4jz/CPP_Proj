/*
 *��Ŀ����
��һ�ּ��ɿ��Զ����ݽ��м��ܣ���ʹ��һ��������Ϊ�����ܳס����������Ĺ���ԭ�����ȣ�ѡ��һ��������Ϊ�ܳף���TRAILBLAZERS����������а������ظ�����ĸ��ֻ������1�������༸�����������ڣ��޸Ĺ����Ǹ�����������ĸ������棬������ʾ��

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

T R A I L B Z E S C D F G H J K M N O P Q U V W X Y

������������ĸ����ʣ�����ĸ����������ڶ���Ϣ���м���ʱ����Ϣ�е�ÿ����ĸ���̶��ڶ������У������������еĶ�Ӧ��ĸһһȡ��ԭ�ĵ���ĸ(��ĸ�ַ��Ĵ�Сд״̬Ӧ�ñ���)����ˣ�ʹ������ܳף�Attack AT DAWN(����ʱ����)�ͻᱻ����ΪTpptad TP ITVH��

��ʵ�������ӿڣ�ͨ��ָ�����ܳ׺����ĵõ����ġ�

��ϸ������

�ӿ�˵��

ԭ�ͣ�

voidencrypt(char * key,char * data,char * encrypt);

���������

char * key���ܳ�

char * data������

���������

char * encrypt������

����ֵ��

void



��������:
������key��Ҫ���ܵ��ַ���

�������:
���ؼ��ܺ���ַ���

ʾ��1
����
nihao
ni
���
le
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
    string key,s;
    while(cin>>key){
        cin>>s;
        string key1;
        string str="abcdefghijklmnopqrstuvwxyz";
        string str1;
        for(int i=0;i<key.size();++i){
            int n=key1.find(key[i]);
            if(n==-1){
                key1 += key[i];                 //��һ���������ǰ�key���ظ����ַ�ȥ��
            }
        }
        str1+=key1;
        for(int i=0;i<str.size();++i){
            int m=key1.find(str[i]);
            if(m==-1)
                str1+=str[i];                   //�ڶ������滻֮���Ӧ����ĸ��
        }
        string str2;
        for(int i=0;i<s.size();++i){
            int m=str.find(s[i]);
            str2 += str1[m];
        }
         
        cout<<str2<<endl;
    }
     
     
     
    return 0;  
}
