/*
 *��Ŀ����
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

 

    **
     * ͳ�Ƴ�Ӣ����ĸ�ַ��ĸ�����
     * 
     * @param str ��Ҫ������ַ���
     * @return Ӣ����ĸ�ĸ���
     *
    public static int getEnglishCharCount(String str)
    {
        return 0;
    }
    
    **
     * ͳ�Ƴ��ո��ַ��ĸ�����
     * 
     * @param str ��Ҫ������ַ���
     * @return �ո�ĸ���
     *
    public static int getBlankCharCount(String str)
    {
        return 0;
    }
    
    **
     * ͳ�Ƴ������ַ��ĸ�����
     * 
     * @param str ��Ҫ������ַ���
     * @return Ӣ����ĸ�ĸ���
     *
    public static int getNumberCharCount(String str)
    {
        return 0;
    }
    
    **
     * ͳ�Ƴ������ַ��ĸ�����
     * 
     * @param str ��Ҫ������ַ���
     * @return Ӣ����ĸ�ĸ���
     *
    public static int getOtherCharCount(String str)
    {
        return 0;
    }

 

 

��������:
����һ���ַ����������пո�

�������:
ͳ������Ӣ���ַ����ո��ַ��������ַ��������ַ��ĸ���

ʾ��1
����
1qazxsw23 edcvfr45tgbn hy67uj m,ki89ol.\\/;p0-=\\][
���
26
3
10
12
 * */

#include <iostream>
#include <cstring>
using namespace std;
   
int main()
{
    char s[1000];
    while(gets(s)!= NULL )
    {
        int cnt1=0;
        int cnt2=0;
        int cnt3=0;
        int cnt4=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]<='z'&&s[i]>='a'||s[i]<='Z'&&s[i]>='A')
            cnt1++;
            else if(s[i]==' ')
            cnt2++;
            else if(s[i]<='9'&&s[i]>='0')
            cnt3++;
            else
            cnt4++;
        }
        printf("%d\n",cnt1);
        printf("%d\n",cnt2);
        printf("%d\n",cnt3);
        printf("%d\n",cnt4);
    }
    return 0;
}
