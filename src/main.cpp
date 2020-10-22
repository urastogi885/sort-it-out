/*@
 *@file main.cpp
 *@author Umang Rastogi
 *@brief main file to sort an array of elements using a specific method
 *@copyright 2020 Umang Rastogi
 */

#include <iostream>
#include <vector>
#include <sort.hpp>

void print(std::vector<int> const &arr);

int main() {
	std::vector<int> array_to_sort{5, 2, 4, 6, 1, 3};
	Sort sort;
	sort.insertion(array_to_sort);
	print(array_to_sort);
	return 0;
}

void print(std::vector<int> const &arr) {
	std::cout << "The vector elements are : ";

   	for(int i = 0; i < int(arr.size()); i++) {
   		std::cout << arr[i] << ' ';
   	}
   	std::cout << '\n';
}
