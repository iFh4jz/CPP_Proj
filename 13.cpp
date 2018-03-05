/*
题目描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符


接口说明

**
 * 反转句子
 * 
 * @param sentence 原句子
 * @return 反转后的句子
 *
public String reverse(String sentence);

 

 

 

输入描述:
将一个英文语句以单词为单位逆序排放。

输出描述:
得到逆序的句子

示例1
输入
I am a boy
输出
boy a am I

*/
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
 
using namespace std;
int test1_main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string res="",temp;
    while(ss>>temp){
        if(res=="")
            res=temp;
        else
            res=temp+" "+res;
 
    }
    cout<<res;
    cout<<endl;
    return 0;
}
 
int /*test2_*/main(){
    string str;
    vector<string> strVec;   
    while(cin>>str){
        strVec.push_back(str);
    } 
    for(auto it=strVec.end()-1;it>=strVec.begin();it--){
        cout<<*it;
        if(it!=strVec.begin()){
            cout<<" ";          
        }
    }
    cout<<endl;
    return 0;
}
