/*
 *题目描述
定义一个二维数组N*M（其中2<=N<=10;2<=M<=10），如5 × 5数组下所示： 


int maze[5][5] = {


        0, 1, 0, 0, 0,


        0, 1, 0, 1, 0,


        0, 0, 0, 0, 0,


        0, 1, 1, 1, 0,


        0, 0, 0, 1, 0,


};


它表示一个迷宫，其中的1表示墙壁，0表示可以走的路，只能横着走或竖着走，不能斜着走，要求编程序找出从左上角到右下角的最短路线。入口点为[0,0],既第一空格是可以走的路。

Input

一个N × M的二维数组，表示一个迷宫。数据保证有唯一解,不考虑有多解的情况，即迷宫只有一条通道。

Output

左上角到右下角的最短路径，格式如样例所示。

Sample Input

0 1 0 0 0

0 1 0 1 0

0 0 0 0 0

0 1 1 1 0

0 0 0 1 0

Sample Output

(0, 0)

(1, 0)

(2, 0)

(2, 1)

(2, 2)

(2, 3)

(2, 4)

(3, 4)

(4, 4)
 

 

 

输入描述:
输入两个整数，分别表示二位数组的行数，列数。再输入相应的数组，其中的1表示墙壁，0表示可以走的路。数据保证有唯一解,不考虑有多解的情况，即迷宫只有一条通道。

输出描述:
左上角到右下角的最短路径，格式如样例所示。

示例1
输入
5 5
0 1 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 1 1 0
0 0 0 1 0
输出
(0,0)
(1,0)
(2,0)
(2,1)
(2,2)
(2,3)
(2,4)
(3,4)
(4,4)
 * */

 #include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int N,M;
    while(cin >> N >> M){
        vector<vector<int> > m(N,vector<int>(M));
        for(int i = 0;i < N;i++){
            for(int j = 0;j < M;j++)
                cin >> m[i][j];
        }
 
//      N = M = 5;
//      vector<vector<int> > m = {{0,1,0,0,0},{0,1,0,1,0},{0,0,0,0,0},{0,1,1,1,0},{0,0,0,1,0}};
 
        vector<vector<int> > vis(N,vector<int>(M,0));
        vector<vector<int> >  dir = {{0,-1},{0,1},{-1,0},{1,0}};
        bool flag = false;
        stack<pair<int,int> > s;
        s.push(make_pair(0,0));
        vis[0][0] = 1;
        while(!s.empty()){
            pair<int,int> temp = s.top();
            flag = false;
            if(temp.first == N-1 && temp.second == M -1)
                break;
            else{
                for(int i = 0;i < dir.size();i++){
                    int next_x = temp.first + dir[i][0];
                    int next_y = temp.second + dir[i][1];
                    if(next_x >= 0&&next_x < N &&next_y >= 0&&next_y < M&&m[next_x][next_y]==0&&!vis[next_x][next_y]){
                        flag = true;
                        vis[next_x][next_y] = true;
                        s.push(make_pair(next_x,next_y));
                        break;
                    }
                }
                if(flag)
                    continue;
                s.pop();
            }
        }
        if(!s.empty()){
            stack<pair<int,int> > temp;
            while(!s.empty()){
                temp.push(s.top());
                s.pop();
            }
            while(!temp.empty()){
                cout << "(" << temp.top().first << "," << temp.top().second << ")\n";
                temp.pop();
            }
        }else{
            cout << "No solution!!\n";
        }
    }
    return 0;
}
