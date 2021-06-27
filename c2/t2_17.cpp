/*************************************************************************
    > File Name: t2_17.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月29日 星期五 18时04分16秒
 ************************************************************************/

#include <iostream>

int main(){
    int i, &ri = i;
    i = 5, ri = 10;
    std::cout << i << " " << ri << std::endl;
    //10 10
    return 0;
}

