/*
 *��Ŀ����
�������ٳ��ж���λͬѧ��ʹ��ʣ�µ�ͬѧ�ųɺϳ�����

˵����

Nλͬѧվ��һ�ţ�������ʦҪ�����е�(N-K)λͬѧ���У�ʹ��ʣ�µ�Kλͬѧ�ųɺϳ����Ρ� 
�ϳ�������ָ������һ�ֶ��Σ���Kλͬѧ���������α��Ϊ1��2����K�����ǵ���߷ֱ�ΪT1��T2������TK��   �����ǵ�����������i��1<=i<=K��ʹ��T1<T2<......<Ti-1<Ti>Ti+1>......>TK�� 
��������ǣ���֪����Nλͬѧ����ߣ�����������Ҫ��λͬѧ���У�����ʹ��ʣ�µ�ͬѧ�ųɺϳ����Ρ� 



��������:
����N

�������:
������Ҫ��λͬѧ����

ʾ��1
����
8
186 186 150 200 160 130 197 200
���
4
 * */

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
       
    int N;
    while(cin >> N)
        {
        vector<int> height;
    for(int k = 0; k < N; ++k)
        {
        int val;
        cin >> val;
        height.push_back(val);
    }
    vector<int> dpl(height.size(), 0);
    vector<int> dpr(height.size(), 0);
    vector<int> end;
    int Max = 0;//��󳤶�
    int len = height.size();
    dpr[len - 1] = 1;
    end.push_back(height[len - 1]);
    for (int i = len - 2; i >= 0; --i)
    {
        int l = 0;
        int r = end.size() - 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (end[m] >= height[i])
                r = m - 1;
            else
                l = m + 1;
        }
        if (l <= end.size() - 1)
            end[l] = height[i];
        else
            end.push_back(height[i]);
        dpr[i] = end.size();
    }
//  for (auto c : dpr)
//      cout << c << " ";
    end.clear();
    end.push_back(height[0]);
    dpl[0] = 1;
    for (int i = 1; i < len; ++i)
    {
        int l = 0;
        int r = end.size() - 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (end[m] >= height[i])
                r = m - 1;
            else
                l = m + 1;
        }
        if (l <= end.size() - 1)
            end[l] = height[i];
        else
            end.push_back(height[i]);
        dpl[i] = end.size();
        Max = max(Max, dpl[i - 1] + dpr[i]);
    }
    cout << len - Max << endl;
    }
    return 0;
}
