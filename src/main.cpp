/*@
 *@file main.cpp
 *@author Umang Rastogi
 *@brief main file to sort an array of elements using a specific method
 *@copyright 2020 Umang Rastogi
 */

#include <iostream>
#include <sort.hpp>

void print(vector<int> const &arr);

int main() {
	vector<int> array_to_sort{5, 2, 4, 6, 1, 3};
	Sort sort;
	sort.quick_sort(array_to_sort, 1, int(array_to_sort.size()));
	print(array_to_sort);
	return 0;
}

void print(vector<int> const &arr) {
	cout << "The vector elements are : ";

   	for(int i = 0; i < int(arr.size()); i++) {
   		cout << arr[i] << ' ';
   	}
   	cout << '\n';
}
