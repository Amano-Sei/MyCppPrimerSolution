/*************************************************************************
    > File Name: t2_35.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年06月26日 星期六 18时35分05秒
 ************************************************************************/

#include <iostream>

int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    //j = -1;
    //k = -1;
    //*p = -1;
    //j2 = -1;
    //k2 = -1;
    return 0;
}

