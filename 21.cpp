/*
 *题目描述
密码要求:

 

 

 

1.长度超过8位

 

 

 

2.包括大小写字母.数字.其它符号,以上四种至少三种

 

 

 

3.不能有相同长度超2的子串重复

 

 

 

说明:长度超过2的子串


输入描述:
一组或多组长度超过2的子符串。每组占一行

输出描述:
如果符合要求输出：OK，否则输出NG

示例1
输入
021Abc9000
021Abc9Abc1
021ABC9000
021$bc9000
输出
OK
NG
NG
OK
 * */
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str;
    vector<string>vec;
    string OK="OK",NG="NG";
     
    while(cin>>str){
        int classes[4]={0};
        if(str.size()<=8)         //第一个要求
            vec.push_back(NG);
        else{           
            for(auto it=str.begin();it!=str.end();it++){
                if((*it)<='9'&&(*it)>='0')      classes[0]=1;
                else if((*it)<='Z'&&(*it)>='A') classes[1]=1;
                else if((*it)<='z'&&(*it)>='a') classes[2]=1;
                else                            classes[3]=1;                
            }                      
            int flag4=0;
            for(int i=0;i<4;i++)
                flag4+=classes[i];
            if(flag4<3)
                //检查第二个要求
                vec.push_back(NG);
           else{ 
                //检验第三个要求
                size_t found=0;
                for(decltype(str.size()) t=0;t<str.size();t++){
                    string sub_str=str.substr(t,3);
                    found=str.find(sub_str,t+3);
                    if(found!=string::npos)
                        break;
                     
                  }
 
                if(found==string::npos)
                     vec.push_back(OK);
                else
                     vec.push_back(NG);               
                  
            }
                    
        }     
    }
    for(decltype(vec.size()) t=0;t<vec.size();t++)
        cout<<vec[t]<<endl;
    return 0;
     
}
