/*@
 *@file sort.hpp
 *@author Umang rastogi
 *@brief Includes a class containing various sorting algorithms
 *@copyright 2020 Umang Rastogi
 */

#ifndef INCLUDE_SORT_HPP_
#define INCLUDE_SORT_HPP_

#include <vector>

using namespace std;

class Sort {
private:
public:
	/*
	* @brief constructor for the class
	* @param none
	* @return none
	*/
	Sort() {
	}

	/*
	* @brief sort an array using insertion-sort
	* @param pointer to the array
	* @return none
	*/
	void insertion_sort(vector<int> &arr);

	/*
	* @brief sort an array using bubble-sort
	* @param pointer to the array
	* @return none
	*/
	void bubble_sort(vector<int> &arr);

	///////// Declarations for Merge-Sort /////////
	/*
	* @brief sort an array using insertion-sort
	* @param pointer to the array
	* @param sub-array ending index
	* @param sub-array starting index
	* @return none
	*/
	void merge_sort(vector<int> &arr, int r, int p);

	/*
	* @brief merge 2 sorted sub-arrays
	* @param pointer to the array
	* @return none
	*/
	void merge(vector<int> &arr, int p, int q, int r);

	///////// Declarations for Heap-Sort /////////
	/*
	* @brief sort an array using heap-sort
	* @param pointer to the array
	* @return none
	*/
	void heap_sort(vector<int> &arr);

	/*
	* @brief build heap
	* @param pointer to the array
	* @return none
	*/
	void build_max_heap(vector<int> &arr, int size);

	/*
	* @brief method to maintain the max-heap property
	* @param pointer to the array
	* @param largest index
	* @return none
	*/
	void max_heapify(vector<int> &arr, int n, int k);

	///////// Declarations for Quicksort /////////
	/*
	* @brief sort an array using quick-sort
	* @param pointer to the array
	* @return none
	*/
	void quick_sort(vector<int> &arr, int p, int r);

	/*
	* @brief partition the array
	* @param pointer to the array
	* @return none
	*/
	void partition(vector<int> &arr, int p, int r);
};

#endif // INCLUDE_SORT_HPP_
