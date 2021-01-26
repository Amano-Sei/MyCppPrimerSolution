/*************************************************************************
    > File Name: t1_11.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月25日 星期一 21时51分15秒
 ************************************************************************/

#include <iostream>
#include <algorithm>

int main(){
    int cl, cr;
    std::cout << "Please input two number:" << std::endl;
    std::cin >> cl >> cr;
    if(cl > cr)
        std::swap(cl, cr);
    while(cl <= cr)
        std::cout << cl++ << std::endl;
    //下意识想写for...
    return 0;
}

