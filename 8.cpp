/*
题目描述
数据表记录包含表索引和数值，请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

输入描述:
先输入键值对的个数
然后输入成对的index和value值，以空格隔开

输出描述:
输出合并后的键值对（多行）

示例1
输入
4
0 1
0 2
1 2
3 4
输出
0 3
1 2
3 4 
*/

#include <iostream>
using namespace std;
  
int main()
{
    int nums;
    cin>>nums;
    int count = nums;
    int *index = new int [nums];
    int *value = new int [nums];
    int i;
    for(i = 0;i<nums;i++)
        cin>>index[i]>>value[i];
    int j = 0;
    while(j<nums-1)
    {
        if(index[j]<nums)
        {
            for(i = j+1;i<nums;i++)
            {
                if(index[i] == index[j])
                {
                    value[j] += value[i];
                    index[i] = nums;
                    count--;
                }
            }
        }
        j++;
    }
    int min;
    int temp;
    for(i = 0;i<nums-1;i++)
    {
        min = i;
        for(j = i+1;j<nums;j++)
        {
            if(index[min]>index[j])
                min = j;
        }
        if(min!=i)
        {
            temp = index[min];
            index[min] = index[i];
            index[i] = temp;
            temp = value[min];
            value[min] = value[i];
            value[i] = temp;
        }
    }
    for(i = 0;i<count;i++)
    {
        cout<<index[i]<<' '<<value[i]<<endl;
    }
    delete [] index;
    delete [] value;
  
    return 0;
}

