/*************************************************************************
    > File Name: t1_13_11.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月25日 星期一 22时07分35秒
 ************************************************************************/

#include <iostream>
#include <algorithm>

int main(){
    int cl, cr;
    std::cout << "Please input two number:" << std::endl;
    std::cin >> cl >> cr;
    if(cl > cr)
        std::swap(cl, cr);
    for(int i = cl; i <= cr; i++)
        std::cout << i << std::endl;
    return 0;
}


