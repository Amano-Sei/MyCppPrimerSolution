/*************************************************************************
    > File Name: t1_4.cpp
    > Author: Amano Sei
    > Mail: amano_sei@outlook.com
    > Created Time: 2021年01月24日 星期日 20时32分06秒
 ************************************************************************/
#include <iostream>

int main()
{
	// prompt user to enter two numbers
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;   
	std::cout << "The product of " << v1 << " and " << v2
	          << " is " << v1 * v2 << std::endl;
	return 0;
}

