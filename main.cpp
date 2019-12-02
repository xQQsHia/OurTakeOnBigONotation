/*

  @authors: 
        Roberto Materano CI: V-26114134 @xqqshia xqqshia@hotmail.com
        Yuarth Hernández CI: V-25822068 @yuarth07 yuarth07@gmail.com


*/


//Basic headers
#include <iostream>
// Algorithms
#include "selectionSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "quickSort.h"
#include "mergeSort.h"
// To calculate our excecution time
#include "class_timer.h"
// GNUPLOT to graph
#include "gnuplot_i.hpp"

void fillArray(int array[], int length);
void printArray(int array[], int length);
void graphFunction(int length[], double time[], char resp);





int main()
{

  int length[3] = {100, 1000, 10000};
  char answer {'M'};
  char algorithmChosen {' '};
   double timeSelectionSort[3] = {0.0};
   double timeBubbleSort[3] = {0.0};
   double timeInsertionSort[3] = {0.0};
   double timeQuickSort[3] = {0.0};
   double timeMergeSort[3] = {0.0};

  while(answer == 'M'){
  std::cout << "a) Selection Sort O(n^2) " << std::endl;
  std::cout << "b) Bubble Sort O(n^2) " << std::endl;
  std::cout << "c) Insertion Sort O(n^2) " << std::endl;
  std::cout << "d) Quick Sort O(n log n) " << std::endl;
  std::cout << "e) Merge Sort O(n log n) " << std::endl;
  std::cout << "Choose algorithm: ";
  std::cin >> algorithmChosen;
          if(algorithmChosen == 'a' or algorithmChosen == 'b' or algorithmChosen == 'c' or algorithmChosen == 'd' or algorithmChosen == 'e')
              {
                answer = 'Y';
                    if(algorithmChosen == 'a')
                      std::cout <<"\n\n\tWelcome to Selection Sort! \n" << std::endl;
                    if(algorithmChosen == 'b')
                      std::cout <<"\n\n\tWelcome to Bubble Sort! \n" << std::endl;
                    if(algorithmChosen == 'c')
                      std::cout <<"\n\n\tWelcome to Insertion Sort! \n" << std::endl;
                    if(algorithmChosen == 'd')
                      std::cout <<"\n\n\tWelcome to Merge Sort! \n" << std::endl;
                    if(algorithmChosen == 'e')
                      std::cout <<"\n\n\tWelcome to Quick Sort! \n" << std::endl;
              }
  while(answer == 'Y'){
  std::cout << "0) 100 " << std::endl;
  std::cout << "1) 1000(1k) " << std::endl;
  std::cout << "2) 10000(10k) " << std::endl;
  std::cout << "Choose amounts of elements: ";
  int resp {0};
  std::cin >> resp;
                      ///////////// SELECTION SORT //////////////
                    if(algorithmChosen == 'a'){
                   
                    if( resp == 0 && algorithmChosen == 'a' )
                    {
                      int newArray[length[0]] {0};
                      int newLength = length[0];
                      fillArray(newArray, newLength);
                      Timer t;
                        selectionSort(newArray, newLength);
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        timeSelectionSort [0] = t.elapsed();
                        printArray(newArray, newLength);
                        graphFunction(length, timeSelectionSort, algorithmChosen);  // should be newLength / time[0]
                    }
                     if( resp == 1 && algorithmChosen == 'a' )
                    {
                      int newArray[length[1]] {0};
                      int newLength = length[1];
                      fillArray(newArray, newLength);
                      Timer t;
                        selectionSort(newArray, newLength);
                        timeSelectionSort [1] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray, newLength);
                        graphFunction(length, timeSelectionSort, algorithmChosen);
                    }
                     if( resp == 2 && algorithmChosen == 'a' )
                    {
                      int newArray[length[2]] {0};
                      int newLength = length[2];
                      fillArray(newArray, newLength);
                      Timer t;
                        selectionSort(newArray, newLength);
                        timeSelectionSort [2] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray, newLength);
                        graphFunction(length, timeSelectionSort, algorithmChosen);
                    }
                  }

                    //////////////////////////BUBBLE SORT ///////////
                   if(algorithmChosen == 'b'){
                   
                    if( resp == 0 && algorithmChosen == 'b' )
                    {
                      int newArray1[length[0]] {0};
                      int newLength1 = length[0];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        bubbleSort(newArray1, newLength1);
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        timeBubbleSort [0] = t.elapsed();
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeBubbleSort, algorithmChosen);
                    }
                     if( resp == 1 && algorithmChosen == 'b' )
                    {
                      int newArray1[length[1]] {0};
                      int newLength1 = length[1];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        bubbleSort(newArray1, newLength1);
                        timeBubbleSort [1] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeBubbleSort, algorithmChosen);
                    }
                     if( resp == 2 && algorithmChosen == 'b' )
                    { 
                      int newArray1[length[2]] {0};
                      int newLength1 = length[2];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        bubbleSort(newArray1, newLength1);
                        timeBubbleSort [2] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeBubbleSort, algorithmChosen);
                    }
                   }

                                        //////////////////////////INSERTION SORT ///////////
                   if(algorithmChosen == 'c'){
                   
                    if( resp == 0 && algorithmChosen == 'c' )
                    {
                      int newArray1[length[0]] {0};
                      int newLength1 = length[0];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        insertionSort(newArray1, newLength1);
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        timeInsertionSort [0] = t.elapsed();
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeInsertionSort, algorithmChosen);
                    }
                     if( resp == 1 && algorithmChosen == 'c' )
                    {
                      int newArray1[length[1]] {0};
                      int newLength1 = length[1];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        insertionSort(newArray1, newLength1);
                        timeInsertionSort [1] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeInsertionSort, algorithmChosen);
                    }
                     if( resp == 2 && algorithmChosen == 'c' )
                    { 
                      int newArray1[length[2]] {0};
                      int newLength1 = length[2];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        insertionSort(newArray1, newLength1);
                        timeInsertionSort [2] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeInsertionSort, algorithmChosen);
                    }
                   }

                                       //////////////////////////QUICKSORT ///////////
                   if(algorithmChosen == 'd'){
                   
                    if( resp == 0 && algorithmChosen == 'd' )
                    {
                      int newArray1[length[0]] {0};
                      int newLength1 = length[0];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        quickSort(newArray1, 0, newLength1-1);
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        timeQuickSort [0] = t.elapsed();
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeQuickSort, algorithmChosen);
                    }
                     if( resp == 1 && algorithmChosen == 'd' )
                    {
                      int newArray1[length[1]] {0};
                      int newLength1 = length[1];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        quickSort(newArray1, 0, newLength1-1);
                        timeQuickSort [1] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeQuickSort, algorithmChosen);
                    }
                     if( resp == 2 && algorithmChosen == 'd' )
                    { 
                      int newArray1[length[2]] {0};
                      int newLength1 = length[2];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        quickSort(newArray1, 0, newLength1-1);
                        timeQuickSort [2] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeQuickSort, algorithmChosen);
                    }
                   }

                    //////////////////////////MERGE SORT ///////////
                   if(algorithmChosen == 'e'){
                   
                    if( resp == 0 && algorithmChosen == 'e' )
                    {
                      int newArray1[length[0]] {0};
                      int newLength1 = length[0];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        mergeSort(newArray1, 0, newLength1-1);
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        timeMergeSort [0] = t.elapsed();
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeMergeSort, algorithmChosen);
                    }
                     if( resp == 1 && algorithmChosen == 'e' )
                    {
                      int newArray1[length[1]] {0};
                      int newLength1 = length[1];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        mergeSort(newArray1, 0, newLength1-1);
                        timeMergeSort [1] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeMergeSort, algorithmChosen);
                    }
                     if( resp == 2 && algorithmChosen == 'e' )
                    { 
                      int newArray1[length[2]] {0};
                      int newLength1 = length[2];
                      fillArray(newArray1, newLength1);
                      Timer t;
                        mergeSort(newArray1, 0, newLength1-1);
                        timeMergeSort [2] = t.elapsed();
                        std::cout << "Time elapsed: " << t.elapsed() << " seconds\n" << std::endl;
                        printArray(newArray1, newLength1);
                        graphFunction(length, timeMergeSort, algorithmChosen);
                    }
                   }



          std::cin >> answer;
          
  }(answer == 'M');

}(answer == 'X');

    return 0; 

}


void fillArray(int array[],int length)
{
      for(int index = 0;index < length; ++index)      ///filling up the vector randomly
          array[index] = rand()%10000 + 1;  
}

// Now that the whole array is sorted, print our sorted array as proof it works
void printArray(int array[], int length){
  for (int index = 0; index < length; ++index)
       { 
           std::cout << array[index] << ' ';
       } 
}

void graphFunction(int length[3], double time[3], char resp)
    {
      // SELECTION SORT //
  if(resp == 'a'){
  std::vector<int> x;
  std::vector<double> y;
    
    x.push_back(length[0]);
    y.push_back(time[0]);
    x.push_back(length[1]);
    y.push_back(time[1]);
    x.push_back(length[2]);
    y.push_back(time[2]);

    std::cout << "\n Elements in Selection Sort[0] = "<< x.at(0) << std::endl;
    std::cout << " Elements in Selection Sort[1] = "<< x.at(1) << std::endl;
    std::cout << " Elements in Selection Sort[2] = "<< x.at(2) << std::endl;
    std::cout << " Time in Selection Sort[0] = "<< y.at(0) << std::endl;
    std::cout << " Time in Selection Sort[1] = "<< y.at(1) << std::endl;
    std::cout << " Time in Selection Sort[2] = "<< y.at(2) << std::endl;

    Gnuplot g2("lines");
        std::cout << "Selection Sort O(n*n)" << std::endl; 
        g2.set_xlabel("Elements").set_ylabel("Time(seconds)");
        g2.set_xrange(0,12000).set_yrange(0,0.2);
        g2.Gnuplot::plot_xy(x,y, "Line A");
        g2.set_style("points").plot_xy(x,y, "Selection Sort O(n^2)");
        std::cout << "Press enter to go next...";
        std::cout << std::endl;
        std::cin.get();
        std::cin.get();
        std::cout << "Wanna continue?(Y/N/M)" << std::endl;
        std::cout << "Y = Continue using the same algorithm but you can add more elements" << std::endl;
        std::cout << "and you graph will change!" << std::endl;
        std::cout << "N = No, exit. \nM = Back to menu. Do it again and try new things!" << std::endl;
        std::cout << "Write your answer: ";
      }

    // BUBBLE SORT //
    if(resp == 'b'){
  std::vector<int> x;
  std::vector<double> y;
    
    x.push_back(length[0]);
    y.push_back(time[0]);
    x.push_back(length[1]);
    y.push_back(time[1]);
    x.push_back(length[2]);
    y.push_back(time[2]);

    std::cout << "\n Elements in Bubble Sort[0] = "<< x.at(0) << std::endl;
    std::cout << " Elements in Bubble Sort[1] = "<< x.at(1) << std::endl;
    std::cout << " Elements in Bubble Sort[2] = "<< x.at(2) << std::endl;
    std::cout << " Time in Bubble Sort[0] = "<< y.at(0) << std::endl;
    std::cout << " Time in Bubble Sort[1] = "<< y.at(1) << std::endl;
    std::cout << " Time in Bubble Sort[2] = "<< y.at(2) << std::endl;

    Gnuplot g2("lines");
        std::cout << "Bubble Sort O(n^2)" << std::endl; 
        g2.set_xlabel("Elements").set_ylabel("Time(seconds)");
        g2.set_xrange(0,12000).set_yrange(0,0.2);
        g2.Gnuplot::plot_xy(x,y, "Line A");
        g2.set_style("points").plot_xy(x,y, "Bubble Sort O(n^2)");
        std::cout << "Press enter to go next...";
        std::cout << std::endl;
        std::cin.get();
        std::cin.get();
        std::cout << "Wanna continue?(Y/N/M)" << std::endl;
        std::cout << "Y = Continue using the same algorithm but you can add more elements" << std::endl;
        std::cout << "and you graph will change!" << std::endl;
        std::cout << "N = No, exit. \nM = Back to menu. Do it again and try new things!" << std::endl;
        std::cout << "Write your answer: ";
      }
    
    // INSERTION SORT //
    if(resp == 'c'){
  std::vector<int> x;
  std::vector<double> y;
    
    x.push_back(length[0]);
    y.push_back(time[0]);
    x.push_back(length[1]);
    y.push_back(time[1]);
    x.push_back(length[2]);
    y.push_back(time[2]);

    std::cout << "\n Elements in Insertion Sort[0] = "<< x.at(0) << std::endl;
    std::cout << " Elements in Insertion Sort[1] = "<< x.at(1) << std::endl;
    std::cout << " Elements in Insertion Sort[2] = "<< x.at(2) << std::endl;
    std::cout << " Time in Insertion Sort[0] = "<< y.at(0) << std::endl;
    std::cout << " Time in Insertion Sort[1] = "<< y.at(1) << std::endl;
    std::cout << " Time in Insertion Sort[2] = "<< y.at(2) << std::endl;

    Gnuplot g2("lines");
        std::cout << "Insertion Sort O(n^2)" << std::endl; 
        g2.set_xlabel("Elements").set_ylabel("Time(seconds)");
        g2.set_xrange(0,12000).set_yrange(0,0.2);
        g2.Gnuplot::plot_xy(x,y, "Line A");
        g2.set_style("points").plot_xy(x,y, "Insertion Sort O(n^2)");
        std::cout << "Press enter to go next...";
        std::cout << std::endl;
        std::cin.get();
        std::cin.get();
        std::cout << "Wanna continue?(Y/N/M)" << std::endl;
        std::cout << "Y = Continue using the same algorithm but you can add more elements" << std::endl;
        std::cout << "and you graph will change!" << std::endl;
        std::cout << "N = No, exit. \nM = Back to menu. Do it again and try new things!" << std::endl;
        std::cout << "Write your answer: ";
      }

      // QUICKSORT //
    if(resp == 'd'){
  std::vector<int> x;
  std::vector<double> y;
    
    x.push_back(length[0]);
    y.push_back(time[0]);
    x.push_back(length[1]);
    y.push_back(time[1]);
    x.push_back(length[2]);
    y.push_back(time[2]);

    std::cout << "\n Elements in Quick Sort[0] = "<< x.at(0) << std::endl;
    std::cout << " Elements in Quick Sort[1] = "<< x.at(1) << std::endl;
    std::cout << " Elements in Quick Sort[2] = "<< x.at(2) << std::endl;
    std::cout << " Time in Quick Sort[0] = "<< y.at(0) << std::endl;
    std::cout << " Time in Quick Sort[1] = "<< y.at(1) << std::endl;
    std::cout << " Time in Quick Sort[2] = "<< y.at(2) << std::endl;

    Gnuplot g2("lines");
        std::cout << "Quick Sort O(n log n)" << std::endl; 
        g2.set_xlabel("Elements").set_ylabel("Time(seconds)");
        g2.set_xrange(0,12000).set_yrange(0,0.2);
        g2.Gnuplot::plot_xy(x,y, "Line A");
        g2.set_style("points").plot_xy(x,y, "Quick Sort O(n log n)");
        std::cout << "Press enter to go next...";
        std::cout << std::endl;
        std::cin.get();
        std::cin.get();
        std::cout << "Wanna continue?(Y/N/M)" << std::endl;
        std::cout << "Y = Continue using the same algorithm but you can add more elements" << std::endl;
        std::cout << "and you graph will change!" << std::endl;
        std::cout << "N = No, exit. \nM = Back to menu. Do it again and try new things!" << std::endl;
        std::cout << "Write your answer: ";
      }

            //  MERGE SORT //
    if(resp == 'e'){
  std::vector<int> x;
  std::vector<double> y;
    
    x.push_back(length[0]);
    y.push_back(time[0]);
    x.push_back(length[1]);
    y.push_back(time[1]);
    x.push_back(length[2]);
    y.push_back(time[2]);

    std::cout << "\n Elements in Merge Sort[0] = "<< x.at(0) << std::endl;
    std::cout << " Elements in Merge Sort[1] = "<< x.at(1) << std::endl;
    std::cout << " Elements in Merge Sort[2] = "<< x.at(2) << std::endl;
    std::cout << " Time in Merge Sort[0] = "<< y.at(0) << std::endl;
    std::cout << " Time in Merge Sort[1] = "<< y.at(1) << std::endl;
    std::cout << " Time in Merge Sort[2] = "<< y.at(2) << std::endl;

    Gnuplot g2("lines");
        std::cout << "Merge Sort O(n log n)" << std::endl; 
        g2.set_xlabel("Elements").set_ylabel("Time(seconds)");
        g2.set_xrange(0,12000).set_yrange(0,0.2);
        g2.Gnuplot::plot_xy(x,y, "Line A");
        g2.set_style("points").plot_xy(x,y, "Merge Sort O(n log n)");
        std::cout << "Press enter to go next...";
        std::cout << std::endl;
        std::cin.get();
        std::cin.get();
        std::cout << "Wanna continue?(Y/N/M)" << std::endl;
        std::cout << "Y = Continue using the same algorithm but you can add more elements" << std::endl;
        std::cout << "and you graph will change!" << std::endl;
        std::cout << "N = No, exit. \nM = Back to menu. Do it again and try new things!" << std::endl;
        std::cout << "Write your answer: ";
      }


    }
