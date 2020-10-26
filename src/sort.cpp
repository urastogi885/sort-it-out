/*@
 *@file sort.cpp
 *@author Umang rastogi
 *@brief Source implementation of various sorting algorithms
 *@copyright 2020 Umang Rastogi
 */

#include <sort.hpp>

void Sort::insertion_sort(vector<int> &arr) {
	// Define type of variables
	int temp;
	int i;
	for (int j = 1; j < int(arr.size()); j++) {
		temp = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > temp) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = temp;
	}
}

void Sort::bubble_sort(vector<int> &arr) {
	int arr_size = arr.size();
	for (int i = 0; i < arr_size - 1; i++) {
		for (int j = arr_size - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

///////// Implementation of methods involved in Merge-Sort /////////
void Sort::merge_sort(vector<int> &arr, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

void Sort::merge(vector<int> &arr, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	vector<int> l_arr;
	vector<int> r_arr;

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

///////// Implementation of methods involved in Heap-Sort /////////
void Sort::heap_sort(vector<int> &arr) {
	int n = arr.size();
	// Build heap (rearrange array) 
    build_max_heap(arr, n);

    for (int i=n-1; i>0; i--) {
        swap(arr[0], arr[i]);
        max_heapify(arr, i, 0); 
    } 
}

void Sort::build_max_heap(vector<int> &arr, int size) {
	for (int i = size / 2 - 1; i >= 0; i--) {
        max_heapify(arr, size, i);
    }
}

void Sort::max_heapify(vector<int> &arr, int n, int k) {
	int largest = k;
    int l = 2*k + 1;
    int r = 2*k + 2;

    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
  
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }

    if (largest != k) {
        swap(arr[k], arr[largest]);
        max_heapify(arr, n, largest);
    } 
}

///////// Implementation of methods involved in Merge-Sort /////////
void Sort::quick_sort(vector<int> &arr, int p, int r) {
	if (p < r) {
		int q = partition(arr, p, r);
		quick_sort(arr, p, q - 1);
		quick_sort(arr, q + 1, r);
	}
}

int Sort::partition(vector<int> &arr, int p, int r) {
	int x = arr[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; j++) {
		if (arr[j] <= x) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[r]);
	return i+1;
}
