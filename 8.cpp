/*
��Ŀ����
���ݱ��¼��������������ֵ����Ա�������ͬ�ļ�¼���кϲ���������ͬ��������ֵ����������㣬�������keyֵ������������

��������:
�������ֵ�Եĸ���
Ȼ������ɶԵ�index��valueֵ���Կո����

�������:
����ϲ���ļ�ֵ�ԣ����У�

ʾ��1
����
4
0 1
0 2
1 2
3 4
���
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

