/*************************************************************************
    > File Name: t1_22.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月26日 星期二 02时21分16秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item ans, cur;
    if(std::cin >> ans){
        while(std::cin >> cur)
            ans += cur;
        std::cout << ans << std::endl;
    }
    return 0;
}

