/*
��Ŀ����
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy���������ŷź�Ϊ��boy a am I��
���е���֮����һ���ո����������г���Ӣ����ĸ�⣬���ٰ��������ַ�


�ӿ�˵��

**
 * ��ת����
 * 
 * @param sentence ԭ����
 * @return ��ת��ľ���
 *
public String reverse(String sentence);

 

 

 

��������:
��һ��Ӣ������Ե���Ϊ��λ�����ŷš�

�������:
�õ�����ľ���

ʾ��1
����
I am a boy
���
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
