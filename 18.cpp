/*
 题目描述
请解析IP地址和对应的掩码，进行分类识别。要求按照A/B/C/D/E类地址归类，不合法的地址和掩码单独归类。


所有的IP地址划分为 A,B,C,D,E五类


A类地址1.0.0.0~126.255.255.255;


B类地址128.0.0.0~191.255.255.255;


C类地址192.0.0.0~223.255.255.255;


D类地址224.0.0.0~239.255.255.255；


E类地址240.0.0.0~255.255.255.255




私网IP范围是：


10.0.0.0～10.255.255.255


172.16.0.0～172.31.255.255


192.168.0.0～192.168.255.255




子网掩码为前面是连续的1，然后全是0。（例如：255.255.255.32就是一个非法的掩码）
本题暂时默认以0开头的IP地址是合法的，比如0.1.1.2，是合法地址

输入描述:
多行字符串。每行一个IP地址和掩码，用~隔开。

输出描述:
统计A、B、C、D、E、错误IP地址或错误掩码、私有IP的个数，之间以空格隔开。

示例1
输入
10.70.44.68~255.254.255.0
1.0.0.1~255.0.0.0
192.168.0.2~255.255.255.0
19..0.~255.255.255.0
输出
1 0 1 0 0 2 1
 */
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
 
vector<string> split(string str, char del){
    stringstream ss(str);
    string tok;
    vector<string> ret;
    while (getline(ss, tok, del)){
        ret.push_back(tok);
    }
    return ret;
}
bool IPisvalid(vector<string> svec){
    if (svec.size() != 4){
        return false;
    }
    return true;
}
bool Maskisvalid(vector<string> svec){
    bool zero = false;
    if (svec.size() != 4){
        return false;
    }
    for (int i = 0; i < 4; i++){
        if (zero == false){
            if (atoi(svec[i].c_str()) != 255){
                if (atoi(svec[i].c_str()) != 0 &&
                    atoi(svec[i].c_str()) != 128 &&
                    atoi(svec[i].c_str()) != 192 &&
                    atoi(svec[i].c_str()) != 224 &&
                    atoi(svec[i].c_str()) != 240 &&
                    atoi(svec[i].c_str()) != 248 &&
                    atoi(svec[i].c_str()) != 252 &&
                    atoi(svec[i].c_str()) != 254){
                    return false;
                }
                else{
                    zero = true;
                }
            }
        }
        else{
            if (atoi(svec[i].c_str()) != 0){
                return false;
            }
        }
    }
    if (atoi(svec[3].c_str()) == 255){
        return false;
    }
    return true;
}
 
int main(){
    vector<int> ret(7, 0);
    string str;
    vector<string> svec;
    vector<string> ip;
    vector<string> mask;
    while (getline(cin, str)){
        svec = split(str, '~');
        ip = split(svec[0], '.');
        mask = split(svec[1], '.');
        if (Maskisvalid(mask) && IPisvalid(ip)){
            if (atoi(ip[0].c_str()) >= 1 && atoi(ip[0].c_str()) <= 126){
                ++ret[0];
                if (atoi(ip[0].c_str()) == 10)
                    ++ret[6];
            }
            else if (atoi(ip[0].c_str()) >= 128 && atoi(ip[0].c_str()) <= 191){
                ++ret[1];
                if (atoi(ip[0].c_str()) == 172){
                    if (atoi(ip[1].c_str()) >= 16 && atoi(ip[1].c_str()) <= 31)
                        ++ret[6];
                }
            }
            else if (atoi(ip[0].c_str()) >= 192 && atoi(ip[0].c_str()) <= 223){
                ++ret[2];
                if (atoi(ip[0].c_str()) == 168)
                    ++ret[6];
            }
            else if (atoi(ip[0].c_str()) >= 224 && atoi(ip[0].c_str()) <= 239){
                ++ret[3];
            }
            else if (atoi(ip[0].c_str()) >= 240 && atoi(ip[0].c_str()) <= 255){
                ++ret[4];
            }
        }
        else{
            ret[5]++;
        }
    }
    cout << ret[0] << " " << ret[1] << " " << ret[2] << " " << ret[3] << " " << ret[4] << " " << ret[5] << " " << ret[6] << endl;
    return 0;
}
