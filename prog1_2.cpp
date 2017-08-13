//初识输入输出
//C++未定义任何输入输出语句，取而代之的是使用标准库来提供IO机制，本实例示范了iostream库。
//通过使用IO库，我们可以扩展main程序，使之能提示用户输入两个数，然后输出他们的和


#include <iostream>
int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}

