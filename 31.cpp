/*
 *��Ŀ����
���ַ����е����е��ʽ��е��š�

˵����

1��ÿ����������26����д��СдӢ����ĸ���ɣ�

2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������

3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ������ת����Ҳֻ�������һ���ո�������

4��ÿ�������20����ĸ��

��������:
����һ���Կո����ָ��ľ���

�������:
������ӵ�����

ʾ��1
����
I am a student
���
student a am I
 * */

#include <stdio.h>
#include <string.h>
 
int main(void){
    char str[10000];
    while(gets(str)){
        int len=strlen(str),i,j;
        //����ո�
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
