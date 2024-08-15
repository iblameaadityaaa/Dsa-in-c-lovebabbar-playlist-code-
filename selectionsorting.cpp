/*
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) 
element from the unsorted portion of the list and moving it to the sorted portion of the list. 

Complexity Analysis of Selection Sort:
Time Complexity: The time complexity of Selection Sort is O(N^2) as there are two nested loops:
One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N^2)

Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. 
The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly. 

Advantages of selection sort:
Simple and easy to understand.
Works well with small datasets.

Disadvantages of selection sort algorithm 
Selection sort has a time complexity of O(n^2) in the worst and average case.
Does not work well on large datasets.
Does not preserve the relative order of items with equal keys which means it is not stable.
*/
#include <bits/stdc++.h>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{
    // One by one move boundary of
    // unsorted subarray
    for (int i = 0; i < n - 1; i++)
    {
        // Find the minimum element in
        // unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}


