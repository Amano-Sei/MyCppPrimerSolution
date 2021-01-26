/*************************************************************************
    > File Name: t1_13_9.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月25日 星期一 22时05分50秒
 ************************************************************************/

#include <iostream>

int main(){
    int sum = 0;
    for(int val = 1; val <= 100; val++)
        sum += val;
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}

