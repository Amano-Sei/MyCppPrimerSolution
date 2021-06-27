/*************************************************************************
    > File Name: t2_36.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年06月26日 星期六 19时40分42秒
 ************************************************************************/

#include <iostream>

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    c++;
    d++;
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    return 0;
}

