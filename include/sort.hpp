/*@
 *@file sort.hpp
 *@author Umang rastogi
 *@brief Includes a class containing various sorting algorithms
 *@copyright 2020 Umang Rastogi
 */

#ifndef INCLUDE_SORT_HPP_
#define INCLUDE_SORT_HPP_

#include <vector>

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
	void insertion(std::vector<int> &arr);
};

#endif // INCLUDE_SORT_HPP_
