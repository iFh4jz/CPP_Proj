//使用加法运算符+来将两个数相加。编写程序使用乘法运算符*, 来打印两个数的乘积。
#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The sum is " << v1 + v2 << std::endl;
    std::cout << "The mul is " << v1 * v2 << std::endl;

    return 0;

}
