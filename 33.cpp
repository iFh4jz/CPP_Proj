/*
 *��Ŀ����
ԭ��ip��ַ��ÿ�ο��Կ�����һ��0-255����������ÿ�β�ֳ�һ����������ʽ���������Ȼ��������������ת���
һ����������
������һ��ip��ַΪ10.0.3.193
ÿ������             ���Ӧ�Ķ�������
10                   00001010
0                    00000000
3                    00000011
193                  11000001
���������Ϊ��00001010 00000000 00000011 11000001,ת��Ϊ10���������ǣ�167773121������IP��ַת��������־������ˡ�

 

��ÿ�ο��Կ�����һ��0-255����������Ҫ��IP��ַ����У��

 

 

 

��������:
���� 
1 ����IP��ַ
2 ����10�����͵�IP��ַ

�������:
���
1 ���ת����10���Ƶ�IP��ַ
2 ���ת�����IP��ַ

ʾ��1
����
10.0.3.193
167969729
���
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
          
        //1��IP��ַ������ֵ
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
          
        //2������ֵ��IP��ַ
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
