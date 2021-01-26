/*************************************************************************
    > File Name: t1_19.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月25日 星期一 23时08分03秒
 ************************************************************************/

#include <iostream>

int main(){
    int cl, cr;
    std::cout << "Please input two number:" << std::endl;
    std::cin >> cl >> cr;
    if(cl > cr){
        int tmp = cl;
        cl = cr;
        cr = tmp;
    }
    while(cl <= cr)
        std::cout << cl++ << std::endl;
    return 0;
}


