/*
 *��Ŀ����
����Ҫ��:

 

 

 

1.���ȳ���8λ

 

 

 

2.������Сд��ĸ.����.��������,����������������

 

 

 

3.��������ͬ���ȳ�2���Ӵ��ظ�

 

 

 

˵��:���ȳ���2���Ӵ�


��������:
һ�����鳤�ȳ���2���ӷ�����ÿ��ռһ��

�������:
�������Ҫ�������OK���������NG

ʾ��1
����
021Abc9000
021Abc9Abc1
021ABC9000
021$bc9000
���
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
        if(str.size()<=8)         //��һ��Ҫ��
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
                //���ڶ���Ҫ��
                vec.push_back(NG);
           else{ 
                //���������Ҫ��
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
