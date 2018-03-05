/*
 *
 * 题目描述
Catcher是MCA国的情报员，他工作时发现敌国会用一些对称的密码进行通信，比如像这些ABBA，ABA，A，123321，但是他们有时会在开始或结束时加入一些无关的字符以防止别国破解。比如进行下列变化 ABBA->12ABBA,ABA->ABAKK,123321->51233214　。因为截获的串太长了，而且存在多种可能的情况（abaaab可看作是aba,或baaab的加密形式），Cathcer的工作量实在是太大了，他只能向电脑高手求助，你能帮Catcher找出最长的有效密码串吗？



输入描述:
输入一个字符串

输出描述:
返回有效密码串的最大长度

示例1
输入
ABBA
输出
4
 * */

#include<stdio.h>
#include<string.h>
int main(){
    char str[10000];
    int len;
    int i,j,k,t;
    while(gets(str)){
        len = strlen(str);
        int maxlen = 0;
        for(i = 0;i<=len;i++){
            if(str[i] == str[i+1]){
                t = 2;
                for(j = i-1,k = i+2;j>=0&&k<len;j--,k++){
                    if(str[j] == str[k])
                        t += 2;
                    else
                        break;
                }
                if(maxlen<t)
                    maxlen = t;
            }
            else if(i+2<len && str[i] == str[i+2]){
                t = 3;
                for(j = i-1,k = i+3;j>=0&&k<len;j--,k++){
                    if(str[j] == str[k])
                        t += 2;
                    else
                        break;
                }
                if(maxlen<t)
                    maxlen = t;
            }
        }
        printf("%d\n",maxlen);
    }
    return 0;
}
