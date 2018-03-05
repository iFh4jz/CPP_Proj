/*
 *��Ŀ����
����һ����ά����N*M������2<=N<=10;2<=M<=10������5 �� 5��������ʾ�� 


int maze[5][5] = {


        0, 1, 0, 0, 0,


        0, 1, 0, 1, 0,


        0, 0, 0, 0, 0,


        0, 1, 1, 1, 0,


        0, 0, 0, 1, 0,


};


����ʾһ���Թ������е�1��ʾǽ�ڣ�0��ʾ�����ߵ�·��ֻ�ܺ����߻������ߣ�����б���ߣ�Ҫ�������ҳ������Ͻǵ����½ǵ����·�ߡ���ڵ�Ϊ[0,0],�ȵ�һ�ո��ǿ����ߵ�·��

Input

һ��N �� M�Ķ�ά���飬��ʾһ���Թ������ݱ�֤��Ψһ��,�������ж�����������Թ�ֻ��һ��ͨ����

Output

���Ͻǵ����½ǵ����·������ʽ��������ʾ��

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
 

 

 

��������:
���������������ֱ��ʾ��λ�������������������������Ӧ�����飬���е�1��ʾǽ�ڣ�0��ʾ�����ߵ�·�����ݱ�֤��Ψһ��,�������ж�����������Թ�ֻ��һ��ͨ����

�������:
���Ͻǵ����½ǵ����·������ʽ��������ʾ��

ʾ��1
����
5 5
0 1 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 1 1 0
0 0 0 1 0
���
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
