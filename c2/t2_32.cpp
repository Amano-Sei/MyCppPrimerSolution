/*************************************************************************
    > File Name: t2_32.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年02月05日 星期五 11时34分00秒
 ************************************************************************/

#include <iostream>

int main(){
    int null = 0, *p = (int *)null;
    //原语句非法，即使把null的定义换成constexpr也非法。
    //所以我姑且强转了...
    return 0;
}

