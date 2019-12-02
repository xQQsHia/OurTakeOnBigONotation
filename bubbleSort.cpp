// falta agregar comentarios al codigo

#include <iostream>

void bubbleSort(int array[],int length)
{
    for(int firstIndex = 0; firstIndex < length; ++firstIndex)
    {
        for(int secondIndex = firstIndex + 1; secondIndex < length; ++secondIndex)
        {
            if(array[firstIndex] > array[secondIndex])
            {
            std::swap(array[firstIndex], array[secondIndex]);
            }
        }
    }
}
