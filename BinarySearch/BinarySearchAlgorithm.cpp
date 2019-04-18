// BinarySearchAlgorithm.cpp
#include "BinarySearchAlgorithm.h"
#include <iostream>

void BinarySearchAlgorithm::BinarySearch(int arr[], const int & size, const int & searchValue)
{
	// Get the low index, which is just 0 because 0 is the beginning index of all arrays.
	int low = 0;

	// Get the high value, which is size - 1 due to how arrays are indexed from 0-n.
	int high = size - 1;

	/* The low and high indexes tend to move around a lot. Example array: 12, 22, 34, 47, 55, 67, 82, 98. low = 0, high = 7 and midpoint = 3. So:

	12, 22, 34, 47, 55, 67, 82, 98
	L			M				H

	We'll search for 34, is 34 less than our array midpoint value 47? Yes, so update high to be 1 less than the midpoint AND update the midpoint of course:

	12, 22, 34, 47, 55, 67, 82, 98.
	L   M    H

	Then is the midpoint value our correct value we're searching for? (34)? Nope. Let's try again, is the midpoint value (22) less than our value we want to
	search for? (34)? Nope, is 34 greater than 22? YES. So update low to be midpoint + 1 and update the midpoint. This looks like:

	12, 22, 34, 47, 55, 67, 82, 98.
	        H
			L
			M

	Is the midpoint the value we're search for? YES. We found it! Return at that point to end the algorithm. You can see why this is log of n time, we
	eliminated half the array when we first started and kept going forward in great time to find our value.
	*/

	/* This while loop is mandatory. It makes sure low or high don't cross over one another and that's definitely a possibility that will go through
	if the search value isn't there.*/
	while (low <= high)
	{
		/* Get the midpoint using low and high, divide it by 2 and the decimal will be dropped off. This is how we decide which half of the array to not
		bother searching. */
		int midpoint = (low + high) / 2;

		// Now is the midpoint index our value we want to search for? If so, display it and return because the algorithm is done.
		if (searchValue == arr[midpoint])
		{
			std::cout << "Found " << searchValue << " at index: " << midpoint << "\n";

			// No need to continue the loop after we found the value, return early.
			return;
		}

		// Is our search value GREATER than the midpoint? If so, increment low past the midpoint.
		else if (searchValue > arr[midpoint])
		{
			low = midpoint + 1;
		}

		// Is our search value LESS than the midpoint? If so, decrement high below the midpoint.
		else if (searchValue < arr[midpoint])
		{
			high = midpoint - 1;
		}
	}

	// Display the value was not found.
	std::cout << "Value " << searchValue << " not found!\n";
}