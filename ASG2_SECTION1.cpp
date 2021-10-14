/**
This program is written in the C++ language.

This program will create 10 diffrent arrays of random number with 
size of 100000, 1000000, and 10000000 each.

Hence, Total number of arrays will be 30

Execution:
suppose the generated array is [70, 30, 5, 100, 50, 32, 45, 98, 26, 72],
it will be sorted to [5, 26, 30, 32, 45, 50, 70, 72, 98, 100] and the execution time will be measured as random time
then, the ramdom array will sort again and the execution time will be measured as sorted time
after getting the random and sorted time, array will be reverse and it would be like [100, 98, 72, 70, 50, 45, 32, 30, 26, 5]

the reverse array will sorted and the execution time will be measured as inverse time

Random, sorted and inverse time will be stored in an array then the program will genrate and follow the same process on another array

*/

#include<iostream>
#include <time.h>
#include <algorithm>
#include <iomanip>
#include "ASG2_head.h"
using namespace std;


int main()
{
    // Array for all different size
    int test_size[] = {100000, 1000000, 10000000}; 

    // Storing the execution time of the array
    double s1_result[3][10]; 

    // Getting the total number of test size, which is constant 3
    unsigned int total_test_cases = sizeof(test_size)/ sizeof(test_size[0]);
    
    for(unsigned int round=0; round< total_test_cases; round++)
    {

        // Counting the time for 10 arrays of same size
        for(unsigned int col=0; col<10; col++)
        {
            // Getting the size of an array and creating an array
            int size = test_size[round]; 
            // size = 10;
            int *arr = new int[size];

            // Generating the random array of given size
            int row = 0;
            for (int x = 0; x < size; x++) 
                arr[x] = rand();

            // Counting the random time(input array is random)
            clock_t tStart = clock();
            sort(arr, arr+ size);
            s1_result[0][col] = (double)(clock() - tStart)/CLOCKS_PER_SEC;

            // Counting the order time(input array is already sorted) 
            clock_t t1Start = clock();
            sort(arr, arr+ size);
            s1_result[1][col] = (double)(clock() - t1Start)/CLOCKS_PER_SEC;
            // Reversing the array
            reverse(arr, arr + size);

            // Counting the inverse time(input arrray is reverse) 
            clock_t t2Start = clock();
            sort(arr, arr+ size);
            s1_result[2][col] = (double)(clock() - t2Start)/CLOCKS_PER_SEC;

        }
        // Display the array having the execution time
        print_array(test_size[round], s1_result);
    }

    return 0;
}