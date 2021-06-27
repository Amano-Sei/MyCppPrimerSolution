/*************************************************************************
    > File Name: t2_18.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月31日 星期日 13时23分38秒
 ************************************************************************/

#include <iostream>

int main(){
    int ival = 0;
    int *p = 0;
    p = &ival;
    *p = 1;
    return 0;
}

