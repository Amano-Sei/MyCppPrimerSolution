/*************************************************************************
    > File Name: t1_23.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月26日 星期二 02时27分58秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item cans, cur;
    if(std::cin >> cans){
        while(std::cin >> cur){
            if(cans.isbn() == cur.isbn())
                cans += cur;
            else{
                std::cout << cans << std::endl;
                cans = cur;
            }
        }
        std::cout << cans << std::endl;
    }
    return 0;
}

