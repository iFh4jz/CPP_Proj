/*
 *题目描述
1、对输入的字符串进行加解密，并输出。

2加密方法为：

当内容是英文字母时则用该英文字母的后一个字母替换，同时字母变换大小写,如字母a时则替换为B；字母Z时则替换为a；

当内容是数字时则把该数字加1，如0替换1，1替换2，9替换0；

其他字符不做变化。

3、解密方法为加密的逆过程。

 

接口描述：

    实现接口，每个接口实现1个基本操作：

void Encrypt (char aucPassword[], char aucResult[])：在该函数中实现字符串加密并输出

说明：

1、字符串以\0结尾。

2、字符串最长100个字符。

 

int unEncrypt (char result[], char password[])：在该函数中实现字符串解密并输出

说明：

1、字符串以\0结尾。

    2、字符串最长100个字符。

 

 

 

输入描述:
输入说明
输入一串要加密的密码
输入一串加过密的密码

输出描述:
输出说明
输出加密后的字符
输出解密后的字符

示例1
输入
abcdefg
BCDEFGH
输出
BCDEFGH
abcdefg
 * */

#include <iostream>
#include <string>
using namespace std;
 
string jiami(string input){
    int length = input.size();
    string result;
    for(int i = 0; i < length; ++i){
        if(input[i] >= '0' && input[i] <= '8')
            result.push_back(input[i] + 1);
        else if(input[i] == '9')
            result.push_back('0');
        else if(input[i] >= 'A' && input[i] <= 'Y')
            result.push_back(input[i] + 33);
        else if(input[i] >= 'a' && input[i] <= 'y')
            result.push_back(input[i] - 31);
        else if(input[i] == 'Z')
            result.push_back('a');
        else if(input[i] == 'z')
            result.push_back('A');
        else
            result.push_back(input[i]);
    }
     
    return result;
}
 
string jiemi(string input){
    int length = input.size();
    string result;
    for(int i = 0; i < length; ++i){
        if(input[i] >= '1' && input[i] <= '9')
            result.push_back(input[i] - 1);
        else if(input[i] == '0')
            result.push_back('9');
        else if(input[i] >= 'B' && input[i] <= 'Z')
            result.push_back(input[i] + 31);
        else if(input[i] >= 'b' && input[i] <= 'z')
            result.push_back(input[i] - 33);
        else if(input[i] == 'A')
            result.push_back('z');
        else if(input[i] == 'a')
            result.push_back('Z');
        else
            result.push_back(input[i]);
    }
     
    return result;
}
 
int main(){
    string input1, input2;
    while(cin >> input1 >> input2){
        string result1 = jiami(input1);
        string result2 = jiemi(input2);
         
        cout << result1 << endl << result2 << endl;
    }
     
    return 0;
}
