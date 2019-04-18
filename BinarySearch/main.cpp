// main.cpp
#include <iostream>
#include <conio.h>
#include "BinarySearchAlgorithm.h"

/*
Algorithm: Binary Search.
Author: Omar Moodie.
Github link: https://github.com/axiom2018
Date: 4/18/2019
Best case: O(1)
Average case: O(log n)
Worst case: O(log n)
*/

int main()
{
	// Create the algorithm class object.
	BinarySearchAlgorithm bsa;

	// Multiple arrays for test cases. Use one of these or create your own int array. Be sure to pass in array size, as well as desired value in binary search function.
	int firstArray[10] = { 2, 5, 8, 12, 15, 18, 25, 26, 40, 42 };
	int secondArray[3] = { 100, 108, 132 };
	int thirdArray[1] = { 200 };
	int fourthArray[20] = { 10, 13, 17, 21, 27, 29, 37, 41, 46, 49, 51, 58, 63, 74, 81, 90, 101, 110, 123, 136 };
	int fifthArray[8] = { 12, 22, 34, 47, 55, 67, 82, 98 };

	// Call binary search.
	bsa.BinarySearch(firstArray, 10, 40);
	bsa.BinarySearch(secondArray, 3, 132);
	bsa.BinarySearch(thirdArray, 1, 202);
	bsa.BinarySearch(fourthArray, 20, 8);
	bsa.BinarySearch(fifthArray, 8, 34);

	_getch();
	return 0;
}