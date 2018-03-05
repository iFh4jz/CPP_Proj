/*
 *题目描述

 上一题是图片
题目描述
若两个正整数的和为素数，则这两个正整数称之为“素数伴侣”，如2和5、6和13，它们能应用于通信加密。现在密码学会请你设计一个程序，从已有的N（N为偶数）个正整数中挑选出若干对组成“素数伴侣”，挑选方案多种多样，例如有4个正整数：2，5，6，13，如果将5和6分为一组中只能得到一组“素数伴侣”，而将2和5、6和13编组将得到两组“素数伴侣”，能组成“素数伴侣”最多的方案称为“最佳方案”，当然密码学会希望你寻找出“最佳方案”。

输入:

有一个正偶数N（N≤100），表示待挑选的自然数的个数。后面给出具体的数字，范围为[2,30000]。

输出:

输出一个整数K，表示你求得的“最佳方案”组成“素数伴侣”的对数。

 

输入描述:
输入说明
1 输入一个正偶数n
2 输入n个整数

输出描述:
求得的“最佳方案”组成“素数伴侣”的对数。

示例1
输入
4
2 5 6 13
输出
2
 * */
#include <iostream>
#include <cstring>
#include <vector>
 
using namespace std;
vector<int> G[105];
int pre[105];
bool used[105];
 
bool dfs(int k)
{
    for(int i=0;i<G[k].size();++i)
    {
        if(used[G[k][i]] == 0)
        {
            used[G[k][i]] = 1;
            if(pre[G[k][i]] == 0 || dfs(pre[G[k][i]]))
            {
                pre[G[k][i]]=k;
                return true;
            }
        }
        else
            continue;
    }
    return false;
}
 
int main()
{
    bool isprime[80000];
    memset(isprime,1,sizeof(isprime));
    isprime[0]=0;//数据从2开始的
    isprime[1]=0;
    for(int i=4;i<80000;i+=2)//除了2以外所有的偶数都不是质数
        isprime[i]=0;
    for(int i=3;i*i<80000;i+=2)
        if(isprime[i])
            for(int j=i*i;j<80000;j+=2*i)
                isprime[j]=0;
    int N;
    int nums[105];
    int temp;
     
    while(cin>>N)
    {
        for(int i=1;i<=N;++i)
        {
            cin>>temp;
            nums[i]=temp;
        }
        //匹配规则
        for(int i=1;i<=N;++i)
        {
            for(int j=i+1;j<=N;++j)
            {
                if(isprime[nums[i]+nums[j]])
                    (nums[i]&1)?G[i].push_back(j):G[j].push_back(i);
            }
        }
        memset(pre,0,sizeof(pre));
        int count=0;
        for(int i=1;i<=N;++i)
        {
            memset(used,0,sizeof(used));
            if(dfs(i))
                count++;
        }
        cout<<count<<endl;
        for(int i=1;i<=N;++i)
            G[i].clear();
    }
    return 0;
}
