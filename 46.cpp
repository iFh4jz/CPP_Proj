/*
 *题目描述
编写一个截取字符串的函数，输入为一个字符串和字节数，输出为按字节截取的字符串。但是要保证汉字不被截半个，如"我ABC"4，应该截为"我AB"，输入"我ABC汉DEF"6，应该输出为"我ABC"而不是"我ABC+汉的半个"。 

 

输入描述:
输入待截取的字符串及长度

输出描述:
截取后的字符串

示例1
输入
我ABC汉DEF
6
输出
我ABC
 * */

#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    string str;
    while(cin>>str){   //输入一个字符串
        int n;
        cin>>n;  //输入字节数
        for(int i=0;i<n;i++){
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
