/*
��Ŀ����
��������ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮������������N��1000�������������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ�����

Input Param 

     n               ����������ĸ���     

 inputArray      n�����������ɵ����� 

Return Value

     OutputArray    ����������������

ע������������֤�����������ȷ�ԣ�������������֤������������ֹһ�顣

��������:
������У���������������ĸ�������������Ӧ����������

�������:
���ض��У������Ľ��
ʾ��1
����
11
10
20
40
32
67
40
20
89
300
400
15
���
10
15
20
32
40
67
89
300
400
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector<int> OperateInput(int sizeOfArray,vector<int> &arr)
{
    for(int i = 0;i<sizeOfArray;i++)
    {
        int cmpWait = arr[i];
        for(int j = i+1;j<sizeOfArray;j++)
        {
            if(cmpWait == arr[j])
                arr[j] = -1;
        }
    }
    vector<int> res;
    for(int i = 0;i<sizeOfArray;i++)
        if(arr[i]!=-1)
            res.push_back(arr[i]);
    sort(res.begin(),res.end());
    return res;
}
 
int main()
{
    int input1;
    while(cin>>input1)
    {
        vector<int> input2;
        int tmp;
        for(int i = 0;i<input1;i++)
        {
            cin>>tmp;
            input2.push_back(tmp);
        }
        vector<int> result = OperateInput(input1,input2);
        for(int i = 0;i<result.size();i++)
            cout<<result[i]<<endl;
    }
     
    return 0;
}

