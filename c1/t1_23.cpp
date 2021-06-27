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
    int cnt = 0;
    if(std::cin >> cans){
        cnt = 1;
        while(std::cin >> cur){
            if(cans.isbn() == cur.isbn())
                cnt++;
            else{
                std::cout << cans.isbn() << " " << cnt << std::endl;
                cans = cur;
                cnt = 1;
            }
        }
        std::cout << cans.isbn() << " " << cnt << std::endl;
    }
    return 0;
}

