/*
 *题目描述
原理：ip地址的每段可以看成是一个0-255的整数，把每段拆分成一个二进制形式组合起来，然后把这个二进制数转变成
一个长整数。
举例：一个ip地址为10.0.3.193
每段数字             相对应的二进制数
10                   00001010
0                    00000000
3                    00000011
193                  11000001
组合起来即为：00001010 00000000 00000011 11000001,转换为10进制数就是：167773121，即该IP地址转换后的数字就是它了。

 

的每段可以看成是一个0-255的整数，需要对IP地址进行校验

 

 

 

输入描述:
输入 
1 输入IP地址
2 输入10进制型的IP地址

输出描述:
输出
1 输出转换成10进制的IP地址
2 输出转换后的IP地址

示例1
输入
10.0.3.193
167969729
输出
167773121
10.3.3.193
 * */

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
  
using namespace std;
  
void  convert_to_binary(int num, vector<int> &B_vec){
    vector<int> result;
    for(int i=0;i<8;++i){
        int a=num%2;
        int b=num/2;
        num=b;
        result.push_back(a);
    }
    for(int i=7;i>=0;--i){
        B_vec.push_back(result[i]);
    }
   
}
  
void  convert_to_binary1(long long  num, vector<int> &B_vec){
    vector<int> result;
    for(int i=0;i<32;++i){
        int a=num%2;
        long long b=num/2;
        num=b;
        result.push_back(a);
    }
    for(int i=31;i>=0;--i){
        B_vec.push_back(result[i]);
    }
   
}
  
  
int main(){
      
    string ip;
      
    long long a_num;
    while(cin>>ip){
        cin>>a_num;
          
        //1、IP地址到整数值
        long long sum=0;
        int b=0,len;
        vector<int> nums;
        for(int j=0;j<ip.size();++j){
            if(ip[j]=='.'){
                len=j-b;
                string str=ip.substr(b,len);
                int num=atoi(str.c_str());
                nums.push_back(num);
                b=j+1;
              
            }
            else if(j==ip.size()-1){
                len=j-b+1;
                string str=ip.substr(b,len);
                int num=atoi(str.c_str());
                nums.push_back(num);
                  
            }
          
        }
        vector<int> temp;
        for(int i=0;i<nums.size();++i){
            if(nums[i]<0||nums[i]>255)
                cout<<"IP is invalid!"<<endl;
            else{
                convert_to_binary(nums[i], temp);
            }
        }
        for(int j=temp.size()-1,k=0;j>=0;--j){
            sum+=temp[j]*pow(2,k);
            k++;
        }
        cout<<sum<<endl;
          
        //2、整数值到IP地址
        vector<int> temp1;
        convert_to_binary1(a_num,temp1);
      
        vector<int> temp2;
        vector<int> temp3;
        for(int i=0;i<32;++i){
            temp2.push_back(temp1[i]);
            if((i+1)%8==0){
                int sum1=0;
                for(int i=0,k=temp2.size()-1;i<temp2.size();++i,k--){
                    sum1+=temp2[i]*pow(2,k);
                }
                temp3.push_back(sum1);
                temp2.clear();
            }
        }
        cout<<temp3[0]<<"."<<temp3[1]<<"."<<temp3[2]<<"."<<temp3[3]<<endl;
    }
  
    return 0;
      
}
