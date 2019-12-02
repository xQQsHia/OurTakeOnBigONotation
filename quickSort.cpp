#include<iostream>

int split(int array[], int begin, int end)
{
    int pivot = array[begin];
    int left = begin;
    int rigth = end;
    int aux;

    while(left < rigth)    ///mientras no se cruzen los indices
    {
        while(array[rigth] > pivot)
            rigth--;
        while((array[left] <= pivot) && (left < rigth))
            left++;
        if(left < rigth)       ///si aun no se cruzan los indices, se intercambian
        {                   ///los menores a la izquierda del pivote y los mayores a su derecha
            aux = array[rigth];
            array[rigth] = array[left];
            array[left] = aux;
        }
    }
    ///como ya se cruzaron los indices, se pone el pivote en su lugar
    aux = array[rigth];
    array[rigth]= array[begin];
    array[begin] = aux;

    return rigth;
}

void quickSort(int array[], int begin, int end)
{
    int pivot;
    if(begin < end)
    {
        pivot = split(array, begin, end);

        ///ordenar la sublista de los menores al pivote
        quickSort(array, begin, pivot - 1);
        ///ordenar la sublista de los mayores al pivote
        quickSort(array, pivot + 1, end);
    }
}



