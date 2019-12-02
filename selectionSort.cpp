#include <iostream>

#include "selectionSort.h"

void selectionSort(int array[], int length)
{

// Step through each element of the array
	// (except the last one, which will already be sorted by the time we get there)
    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we’ve encountered this iteration
		// Start by assuming the smallest element is the first element of this iteration
        int smallestIndex = startIndex;

        // Then look for a smaller element in the rest of the array
        for(int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
                // If we've found an element that is smaller than our previously found smallest
                if (array[currentIndex] < array[smallestIndex])
                    //then keep track of it
                    smallestIndex = currentIndex;
               //     std::cout << "Smallest Index: " << smallestIndex << std::endl;
        }
        // smallestIndex is now the smallest element in the remaining array
        // swap our start element with our smallest element (this sorts it into the correct place)

        std::swap(array[startIndex], array[smallestIndex]);
    }

}