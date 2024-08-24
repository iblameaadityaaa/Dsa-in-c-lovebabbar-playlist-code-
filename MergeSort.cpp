/*Merge Sort Algorithm--> fastest algorithm among all sorting algorithms 
Merge sort is a sorting algorithm that follows the divide-and-conquer approach. 
It works by recursively dividing the input array into smaller subarrays and sorting those subarrays then merging them back together to obtain the sorted array.

How does Merge Sort work?
Merge sort is a popular sorting algorithm known for its efficiency and stability. It follows the divide-and-conquer approach to sort a given array of elements.

Here’s a step-by-step explanation of how merge sort works:

Divide: Divide the list or array recursively into two halves until it can no more be divided.
Conquer: Each subarray is sorted individually using the merge sort algorithm.
Merge: The sorted subarrays are merged back together in sorted order. The process continues until all elements from both subarrays have been merged.

Recurrence Relation of Merge Sort:
The recurrence relation of merge sort is:
T(n)={O(1) if n=1, 2T(n/2)+O(n) if n>1}--> RELATION
T(n) Represents the total time time taken by the algorithm to sort an array of size n.
2T(n/2) represents time taken by the algorithm to recursively sort the two halves of the array. Since each half has n/2 elements, we have two recursive calls with input size as (n/2).
O(n) represents the time taken to merge the two sorted halves

Applications of Merge Sort:
Sorting large datasets
External sorting (when the dataset is too large to fit in memory)
Inversion counting
Merge Sort and its variations are used in library methods of programming languages. For example its variation TimSort is used in Python, Java Android and Swift. The main reason why it is preferred to sort non-primitive types is stability which is not there in QuickSort. For example Arrays.sort in Java uses QuickSort while Collections.sort uses MergeSort.
It is a preferred algorithm for sorting Linked lists.
It can be easily parallelized as we can independently sort subarrays and then merge.
The merge function of merge sort to efficiently solve the problems like union and intersection of two sorted arrays.

Advantages of Merge Sort:
Stability : Merge sort is a stable sorting algorithm, which means it maintains the relative order of equal elements in the input array.
Guaranteed worst-case performance: Merge sort has a worst-case time complexity of O(N logN) , which means it performs well even on large datasets.
Simple to implement: The divide-and-conquer approach is straightforward.
Naturally Parallel : We independently merge subarrays that makes it suitable for parallel processing.

Disadvantages of Merge Sort:
Space complexity: Merge sort requires additional memory to store the merged sub-arrays during the sorting process.
Not in-place: Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data. This can be a disadvantage in applications where memory usage is a concern.
Slower than QuickSort in general. QuickSort is more cache friendly because it works in-place.
*/

#include <iostream>
#include<vector>
using namespace std;
using namespace std;
void merge(int* arr, int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    
    int* first=new int[len1];
    int* second=new int[len2];

    int mainArrayIndex=s;
    for(int i=0;i<len1; i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[mainArrayIndex++];
    }
    //merge 2 sorted arrays (A separate question on leetcode)
    
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    void mergeSort(int* arr,int s, int e){
        if(s>=e){
            return ;
        }
        int mid=s+(e-s)/2;
        //left part sort karo
        mergeSort(arr,s,mid);
        //right part sort karo
        mergeSort(arr,mid,e);
        //merge 
        merge(arr,s,e);
    }
};