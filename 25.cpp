/*
 *题目描述
计算最少出列多少位同学，使得剩下的同学排成合唱队形

说明：

N位同学站成一排，音乐老师要请其中的(N-K)位同学出列，使得剩下的K位同学排成合唱队形。 
合唱队形是指这样的一种队形：设K位同学从左到右依次编号为1，2…，K，他们的身高分别为T1，T2，…，TK，   则他们的身高满足存在i（1<=i<=K）使得T1<T2<......<Ti-1<Ti>Ti+1>......>TK。 
你的任务是，已知所有N位同学的身高，计算最少需要几位同学出列，可以使得剩下的同学排成合唱队形。 



输入描述:
整数N

输出描述:
最少需要几位同学出列

示例1
输入
8
186 186 150 200 160 130 197 200
输出
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
    int Max = 0;//最大长度
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
