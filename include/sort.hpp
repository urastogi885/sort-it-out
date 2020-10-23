/*@
 *@file sort.hpp
 *@author Umang rastogi
 *@brief Includes a class containing various sorting algorithms
 *@copyright 2020 Umang Rastogi
 */

#ifndef INCLUDE_SORT_HPP_
#define INCLUDE_SORT_HPP_

#include <vector>
#include <algorithm>

class Sort {
private:
public:
	Sort() {
	}

	/*
	* @brief sort an array using insertion-sort
	* @param pointer to the array
	* @return none
	*/
	void insertion_sort(std::vector<int> &arr);

	/*
	* @brief sort an array using insertion-sort
	* @param pointer to the array
	* @param sub-array ending index
	* @param sub-array starting index
	* @return none
	*/
	void merge_sort(std::vector<int> &arr, int r, int p);

	/*
	* @brief merge 2 sorted sub-arrays
	* @param pointer to the array
	* @return none
	*/
	void merge(std::vector<int> &arr, int p, int q, int r);
};

#endif // INCLUDE_SORT_HPP_
