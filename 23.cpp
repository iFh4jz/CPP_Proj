/*
 *��Ŀ����
������һ�������⣺��ĳ�̵�涨����������ˮƿ���Ի�һƿ��ˮ��С��������ʮ������ˮƿ���������Ի�����ƿ��ˮ�ȣ�������5ƿ���������£�����9����ƿ�ӻ�3ƿ��ˮ���ȵ�3ƿ���ģ������Ժ�4����ƿ�ӣ���3���ٻ�һƿ���ȵ���ƿ���ģ���ʱ��ʣ2����ƿ�ӡ�Ȼ�������ϰ��Ƚ����һƿ��ˮ���ȵ���ƿ���ģ������Ժ���3����ƿ�ӻ�һƿ���Ļ����ϰ塣���С��������n������ˮƿ�������Ի�����ƿ��ˮ�ȣ� 
��������:
�����ļ�������10��������ݣ�ÿ������ռһ�У�������һ��������n��1<=n<=100������ʾС�����ϵĿ���ˮƿ����n=0��ʾ�����������ĳ���Ӧ��������һ�С�

�������:
����ÿ��������ݣ����һ�У���ʾ�����Ժȵ���ˮƿ�������һƿҲ�Ȳ��������0��

ʾ��1
����
3
10
81
0
���
1
5
40
 **/
#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
 
    int number;
    while (cin >> number){
        int sum = 0;
        int result = number / 3;
        int reminder = number % 3;
        if (number<2)
            cout << sum << endl;
        else{
            while (result + reminder>2){
                sum += result;
                number = result + reminder;
                result = number / 3;
                reminder = number % 3;
            }
            if (result + reminder == 2&&reminder!=0)
                sum += 2;
            else if (result + reminder == 2 && reminder == 0)
                sum += 3;
            else if (result + reminder == 1)
                sum += 1;
            cout << sum << endl;
        }
 
    }
 
    return 0;
}
