/*************************************************************************
    > File Name: Sales_data.h
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年06月27日 星期日 22时48分37秒
 ************************************************************************/

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif

