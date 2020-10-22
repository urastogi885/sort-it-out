/*@
 *@file sort.cpp
 *@author Umang rastogi
 *@brief Source implementation of various sorting algorithms
 *@copyright 2020 Umang Rastogi
 */

#include <sort.hpp>

void Sort::insertion(std::vector<int> &arr) {
	// Define type of variables
	int temp;
	int i;
	for (int j = 1; j < int(arr.size()); j++) {
		temp = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > temp) {
			arr[i + 1] = arr[i];
			i -= 1;
		}
		arr[i + 1] = temp;
	}
}
