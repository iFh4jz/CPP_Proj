/*
 *��Ŀ����
��һֻ���ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�

 

    **
     * ͳ�Ƴ�����������
     * 
     * @param monthCount �ڼ�����
     * @return ��������
     *
    public static int getTotalCount(int monthCount)
    {
        return 0;
    }

 

 

��������:
����int�ͱ�ʾmonth

�������:
�����������int��

ʾ��1
����
9
���
34
 * */

#include <iostream>
using namespace std;
 
int main(){
    int month;
     
    while(cin >> month){
        int first = 1;
        int second = 1;
        int result;
        for(int i = 3; i <= month; ++i){
            result = first + second;
            first = second;
            second = result;
        }
         
        cout << result << endl;
    }
     
    return 0;
}
