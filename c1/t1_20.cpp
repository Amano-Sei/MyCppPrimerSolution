/*************************************************************************
    > File Name: t1_20.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月26日 星期二 02时16分12秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    while(std::cin >> book)
        std::cout << book << std::endl;
    return 0;
}

