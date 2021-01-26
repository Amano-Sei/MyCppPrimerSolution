/*************************************************************************
    > File Name: t1_9.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月25日 星期一 21时48分53秒
 ************************************************************************/

#include <iostream>

int main(){
    int sum = 0, val = 50;
    while(val <= 100)
        sum += val++;
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}

