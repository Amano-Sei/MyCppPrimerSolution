/*************************************************************************
    > File Name: t1_5.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月24日 星期日 20时34分00秒
 ************************************************************************/
#include <iostream>

int main()
{
	// prompt user to enter two numbers
	std::cout << "Enter two numbers:"
    std::cout << std::endl; 
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;   
	std::cout << "The sum of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 + v2;
	std::cout << std::endl;
	return 0;
}

