/*************************************************************************
    > File Name: t1_16.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月25日 星期一 22时43分44秒
 ************************************************************************/

#include <iostream>

int main(){
    int sum = 0, value = 0;
    while(std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

