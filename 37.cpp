/*
 *题目描述
有一只兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子，假如兔子都不死，问每个月的兔子总数为多少？

 

    **
     * 统计出兔子总数。
     * 
     * @param monthCount 第几个月
     * @return 兔子总数
     *
    public static int getTotalCount(int monthCount)
    {
        return 0;
    }

 

 

输入描述:
输入int型表示month

输出描述:
输出兔子总数int型

示例1
输入
9
输出
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
