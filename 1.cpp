/*
��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո������ 
��������:
һ���ַ������ǿգ�����С��5000��

�������:
����N�����һ�����ʵĳ��ȡ�

ʾ��1
����
hello world
���
5
*/

#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    /*string str;
    vector<string> result;
    int count=0;
    int i=0;
    while(cin>>str){
        result.push_back(str);
    }
    
    cout<<result[result.size()-1].length()<<endl;
    return count;*/
    string str;
    int count=0;
    while(getline(cin,str)){
        int i=0;
        while(str[i]!='\0'){
            if(str[i]==' ')
                count=0;
            else
                count++;
            i++;
        }
        cout<<count<<endl;
         
    }
    return 0;
     
     
}
