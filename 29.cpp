/*
 *��Ŀ����
1����������ַ������мӽ��ܣ��������

2���ܷ���Ϊ��

��������Ӣ����ĸʱ���ø�Ӣ����ĸ�ĺ�һ����ĸ�滻��ͬʱ��ĸ�任��Сд,����ĸaʱ���滻ΪB����ĸZʱ���滻Ϊa��

������������ʱ��Ѹ����ּ�1����0�滻1��1�滻2��9�滻0��

�����ַ������仯��

3�����ܷ���Ϊ���ܵ�����̡�

 

�ӿ�������

    ʵ�ֽӿڣ�ÿ���ӿ�ʵ��1������������

void Encrypt (char aucPassword[], char aucResult[])���ڸú�����ʵ���ַ������ܲ����

˵����

1���ַ�����\0��β��

2���ַ����100���ַ���

 

int unEncrypt (char result[], char password[])���ڸú�����ʵ���ַ������ܲ����

˵����

1���ַ�����\0��β��

    2���ַ����100���ַ���

 

 

 

��������:
����˵��
����һ��Ҫ���ܵ�����
����һ���ӹ��ܵ�����

�������:
���˵��
������ܺ���ַ�
������ܺ���ַ�

ʾ��1
����
abcdefg
BCDEFGH
���
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
