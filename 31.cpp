/*
 *题目描述
对字符串中的所有单词进行倒排。

说明：

1、每个单词是以26个大写或小写英文字母构成；

2、非构成单词的字符均视为单词间隔符；

3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；

4、每个单词最长20个字母；

输入描述:
输入一行以空格来分隔的句子

输出描述:
输出句子的逆序

示例1
输入
I am a student
输出
student a am I
 * */

#include <stdio.h>
#include <string.h>
 
int main(void){
    char str[10000];
    while(gets(str)){
        int len=strlen(str),i,j;
        //计算空格
        int flag=0;
        if((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))flag=0;
        else flag=1;
        for(i=len-1;i>=(0+flag);i--){
            int word_len=0;
            while((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                i--;
                word_len++;
                if(i==(-1+flag))break;
            }
            for(j=1;j<=word_len;j++){
                printf("%c",str[i+j]);
                if(j==word_len){
                     if(i==(-1+flag)){
                        printf("\n");
                        break;
                    }
                    printf(" ");   
                }
            }
            
        } 
    }
    return 0;
}
