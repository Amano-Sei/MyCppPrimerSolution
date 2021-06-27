/*************************************************************************
    > File Name: t2_42.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年06月27日 星期日 22时37分45秒
 ************************************************************************/

#include <iostream>
#include <string>
#include "Sales_data.h"

bool input(Sales_data &book){
    double price;
    if(std::cin >> book.bookNo >> book.units_sold >> price){
        book.revenue = book.units_sold*price;
        return true;
    }
    return false;
}

void print(const Sales_data &book){
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " ";
    if(book.units_sold==0)
       std::cout << "(no sales)";
    else
       std::cout << book.revenue/book.units_sold;
    std::cout << std::endl;
}

//t1.20
//int main(){
//    Sales_data book;
//    while(input(book))
//        print(book);
//    return 0;
//}

//t1.21
//int main(){
//    Sales_data book1, book2;
//    if(!input(book1))
//        return -1;
//    if(!input(book2))
//        return -1;
//    if(book1.bookNo == book2.bookNo){
//        double crevenue = book1.revenue+book2.revenue;
//        unsigned cunits_sold = book1.units_sold+book2.units_sold;
//        std::cout << book1.bookNo << " " << cunits_sold << " " << crevenue << " ";
//        if(cunits_sold==0)
//            std::cout << "(no sales)";
//        else
//            std::cout << crevenue/cunits_sold;
//        std::cout << std::endl;
//    }else
//        std::cout << "Data must refer to the same ISBN" << std::endl;
//    return 0;
//}

//t1.22
//int main(){
//    Sales_data ans, book;
//    if(input(ans)){
//        while(input(book)){
//            if(ans.bookNo == book.bookNo){
//                ans.units_sold += book.units_sold;
//                ans.revenue += book.revenue;
//            }else{
//                std::cout << "Data must refer to the same ISBN" << std::endl;
//                return -1;
//            }
//        }
//    }
//    print(ans);
//    return 0;
//}

//t1.23
//int main(){
//    Sales_data cans, cur;
//    int cnt;
//    if(input(cans)){
//        cnt = 1;
//        while(input(cur)){
//            if(cans.bookNo == cur.bookNo)
//                cnt++;
//            else{
//                std::cout << cans.bookNo << " " << cnt << std::endl;
//                cans = cur;
//                cnt = 1;
//            }
//        }
//        std::cout << cans.bookNo << " " << cnt << std::endl;
//    }
//}

//t1.25
int main(){
    Sales_data total;
    if(input(total)){
        Sales_data trans;
        while(input(trans)){
            if(total.bookNo == trans.bookNo){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }else{
                print(total);
                total = trans;
            }
        }
        print(total);
    }else{
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}
