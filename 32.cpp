/*
 *
 * ��Ŀ����
Catcher��MCA�����鱨Ա��������ʱ���ֵй�����һЩ�ԳƵ��������ͨ�ţ���������ЩABBA��ABA��A��123321������������ʱ���ڿ�ʼ�����ʱ����һЩ�޹ص��ַ��Է�ֹ����ƽ⡣����������б仯 ABBA->12ABBA,ABA->ABAKK,123321->51233214������Ϊ�ػ�Ĵ�̫���ˣ����Ҵ��ڶ��ֿ��ܵ������abaaab�ɿ�����aba,��baaab�ļ�����ʽ����Cathcer�Ĺ�����ʵ����̫���ˣ���ֻ������Ը������������ܰ�Catcher�ҳ������Ч���봮��



��������:
����һ���ַ���

�������:
������Ч���봮����󳤶�

ʾ��1
����
ABBA
���
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
