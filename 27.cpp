/*
 *��Ŀ����
��дһ�����򣬽������ַ����е��ַ������¹�������

���� 1 ��Ӣ����ĸ�� A �� Z ���У������ִ�Сд��

       �磬���룺 Type   ����� epTy

���� 2 ��ͬһ��Ӣ����ĸ�Ĵ�Сдͬʱ����ʱ����������˳�����С�

     �磬���룺 BabA   ����� aABb

���� 3 ����Ӣ����ĸ�������ַ�����ԭ����λ�á�

     �磬���룺 By?e   ����� Be?y

������

    ���룺

   A Famous Saying: Much Ado About Nothing(2012/8).

    �����

   A  aaAAbc   dFgghh :  iimM   nNn   oooos   Sttuuuy  (2012/8).


��������:


�������:


ʾ��1
����
A Famous Saying: Much Ado About Nothing (2012/8).
���
A aaAAbc dFgghh: iimM nNn oooos Sttuuuy (2012/8).
 * */

#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
int main()
{
    string str;
    while (cin >> str)
    {
        //vector<char> a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
        //vector<vector<char>> result;
        vector<char> result_final;
        for(int j=0; j<26; j++)
        {
            for(int i=0; i<str.size(); i++)
            {
                if(str[i]-'a'==j||str[i]-'A'==j)
                {
                    result_final.push_back(str[i]);
                }
            }
        }
         
        int M = 0;
        for (int i = 0; i<str.size(); i++)
        {
            if ((str[i] >= 'A'&&str[i] <= 'Z') || (str[i] >= 'a'&&str[i] <= 'z'))
            {
                if (M<result_final.size())
                {
                    cout << result_final[M];
                    M++;
                }
            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
