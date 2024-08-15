#include<iostream>
using namespace std;
/*
What is Linear Search Algorithm?
Linear search is a method for searching for an element in a collection of elements.
In linear search, each element of the collection is visited one by one in a sequential fashion to find the desired element.
linear search is also called as seqeuential search.

ALGORITHM FOR LINEAR SEARCH:
Start: Begin at the first element of the collection of elements.
Compare: Compare the current element with the desired element.
Found: If the current element is equal to the desired element, return true or index to the current element.
Move: Otherwise, move to the next element in the collection.
Repeat: Repeat steps 2-4 until we have reached the end of collection.
Not found: If the end of the collection is reached without finding the desired element, return that the desired element is not in the array.

Time and Space complexities for linear search 
Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1).
Worst Case: In the worst case, the key might be present at the last index i.e., 
opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
Average Case: O(N)
Auxiliary Space: O(1) as except for the variable to iterate through the list, no other variable is used. 

Applications of Linear Search Algorithm:
Unsorted Lists: When we have an unsorted array or list, linear search is most commonly used to find any element in the collection.
Small Data Sets: Linear Search is preferred over binary search when we have small data sets with.
Searching Linked Lists: In linked list implementations, linear search is commonly used to find elements within the list. Each node is checked sequentially until the desired element is found.
Simple Implementation: Linear Search is much easier to understand and implement as compared to Binary Search or Ternary Search.

Advantages of linear search algorithm 
Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of any data type.
Does not require any additional memory.
It is a well-suited algorithm for small datasets.

Disadvantages of linear search algorithm 
Linear search has a time complexity of O(N), which in turn makes it slow for large datasets.
Not suitable for large arrays.

When to use linear search alogrithm
When we are dealing with a small dataset.
When you are searching for a dataset stored in contiguous memory.
*/

bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
}


int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }


    return 0;
}
