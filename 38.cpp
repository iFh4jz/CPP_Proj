/*
 *��Ŀ����
����һ���������߶��������£�ÿ����غ�����ԭ�߶ȵ�һ��; ������, �����ڵ�5�����ʱ��������������?��5�η�����ߣ� 

 

    **
     * ͳ�Ƴ���5�����ʱ��������������?
     * 
     * @param high �����ʼ�߶�
     * @return Ӣ����ĸ�ĸ���
     *
    public static double getJourney(int high)
    {
        return 0;
    }
    
    **
     * ͳ�Ƴ���5�η������?
     * 
     * @param high �����ʼ�߶�
     * @return �ո�ĸ���
     *
    public static double getTenthHigh(int high)
    {
        return 0;
    }

 

 

��������:
������ʼ�߶ȣ�int��

�������:
�ֱ������5�����ʱ�������������׵�5�η������

ʾ��1
����
1
���
2.875
0.03125
 * */

#include<iostream>
#include<cmath>
using namespace std;
 
 
int main()
{
    int n;
    while (cin >> n)
    {
        double sum = 0;
        double k = 0;
        for (int i = 0; i < 4; i++)
        {
            k=n / pow(2, i + 1);
            sum = sum + k*2;
        }
        cout << sum+n <<endl;
        //k = n / pow(2, 5);
        cout << k/2 << endl;
    }
    return 0;
}
