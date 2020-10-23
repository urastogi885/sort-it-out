/*@
 *@file sort.cpp
 *@author Umang rastogi
 *@brief Source implementation of various sorting algorithms
 *@copyright 2020 Umang Rastogi
 */

#include <sort.hpp>

void Sort::insertion_sort(std::vector<int> &arr) {
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

void Sort::merge_sort(std::vector<int> &arr, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

void Sort::merge(std::vector<int> &arr, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	std::vector<int> l_arr;
	std::vector<int> r_arr;

	for (int i = 0; i < n1; i++) {
		l_arr.push_back(arr[p + i]);
	}
	for (int i = 0; i < n2; i++) {
		r_arr.push_back(arr[q + i + 1]);
	}
	int i = 0;
	int j = 0;
	int k = p;
	//marge temp arrays to real array
   while(i < n1 && j < n2) {
      if(l_arr[i] <= r_arr[j]) {
         arr[k] = l_arr[i];
         i++;
      }else{
         arr[k] = r_arr[j];
         j++;
      }
      k++;
   }
   while(i < n1) {       //extra element in left array
      arr[k] = l_arr[i];
      i++; k++;
   }
   while(j < n2) {     //extra element in right array
      arr[k] = r_arr[j];
      j++; k++;
   }
}
