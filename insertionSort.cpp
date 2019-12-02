#include<iostream>

void insertionSort( int array[], int length)
{
    for (int index = 1; index < length; ++index)
    {
        int aux = array[index];
        int index1 = index - 1;
        while ( index1 >= 0 && aux < array[index1])
        {
            array[index1 + 1] = array[index1];
            index1--;
        }
        array[index1 + 1] = aux;
    }
}
