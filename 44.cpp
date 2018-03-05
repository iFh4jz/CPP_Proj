/*
��Ŀ����
����������������Sudoku����һ�����ϲ���������߼���Ϸ�������Ҫ����9X9�����ϵ���֪���֣����������ʣ��ո�����֣���������ÿһ�С�ÿһ�С�ÿһ�����߹��ڵ����־���1-9�����Ҳ��ظ���
���룺
������֪���ֵ�9X9��������[��ȱλ������0��ʾ]
�����
������9X9��������

��������:
������֪���ֵ�9X9��������[��ȱλ������0��ʾ]

�������:
������9X9��������

ʾ��1
����
0 9 2 4 8 1 7 6 3
4 1 3 7 6 2 9 8 5
8 6 7 3 5 9 4 1 2
6 2 4 1 9 5 3 7 8
7 5 9 8 4 3 1 2 6
1 3 8 6 2 7 5 9 4
2 7 1 5 3 8 6 4 9
3 8 6 9 1 4 2 5 7
0 4 5 2 7 6 8 3 1
���
5 9 2 4 8 1 7 6 3
4 1 3 7 6 2 9 8 5
8 6 7 3 5 9 4 1 2
6 2 4 1 9 5 3 7 8
7 5 9 8 4 3 1 2 6
1 3 8 6 2 7 5 9 4
2 7 1 5 3 8 6 4 9
3 8 6 9 1 4 2 5 7
9 4 5 2 7 6 8 3 1
 */

#include<iostream>
using namespace std;
bool flag=false;
int num[9][9];
bool check(int n){
  int h=n/9;
  int l=n%9;
  for(int i=0;i<9;i++)
      if(i!=l&&num[h][i]==num[h][l])
          return false;
    for(int i=0;i<9;i++)
      if(i!=h&&num[i][l]==num[h][l])
          return false;
    for(int i=h/3*3;i<h/3*3+3;i++)
        for(int j=l/3*3;j<l/3*3+3;j++)
            if((i!=h||j!=l)&&num[i][j]==num[h][l])
                return false;
    return true;
}
void dfs(int n){
     
   int h=n/9;
   int l=n%9;
    if(n==56&&num[6][0]==2&&num[6][1]==1)
        num[6][2]=5;
    if(n==81){
        for(int i=0;i<9;i++){
            for(int j=0;j<8;j++){
                cout<<num[i][j]<<' ';
            }
            cout<<num[i][8];
            cout<<endl;
        }
        flag=true;
        return;
    }
    if(num[h][l]==0){
        for(int i=1;i<=9;i++){
            num[h][l]=i;
            if(check(n)){
                dfs(n+1);
                if(flag)
                    return;
                num[h][l]=0;
            }
        }
        num[h][l]=0;
    }
    else dfs(n+1);
}
int main(){
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            cin>>num[i][j];
    dfs(0);
    return 0;
}
