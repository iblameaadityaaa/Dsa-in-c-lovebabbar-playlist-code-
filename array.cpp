#include<iostream>
using namespace std;

// HOLD
/*
Arrays- An array is a collection of items of the same variable type that are stored at contiguous memory locations.
need of arrays-
1)Storing data for processing
2)Implementing data structures such as stacks and queues
3)Representing data in tables and matrices
4)Creating dynamic data structures such as linked lists and trees

Array Operations:-
Common operations performed on arrays include:

Traversal : Visiting each element of an array in a specific order (e.g., sequential, reverse).
Insertion : Adding a new element to an array at a specific index.
Deletion : Removing an element from an array at a specific index.
Searching : Finding the index of an element in an array.

Applications of Array
Arrays are used in a wide variety of applications, including:

Storing data for processing
Implementing data structures such as stacks and queues
Representing data in tables and matrices
Creating dynamic data structures such as linked lists and trees

*/
void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}

int main() {

    //declare
    int number[15];

    //accessing an array
    cout << "Value at 14 index " << number[14] << endl;

    //cout << "Value at 20 index " << number[20] << endl;

    //initialising an array 
    int second[3] = {5, 7, 11};

    //accesing an element
    cout << "Value at 2 index " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;
    //printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<" Size of Third is " << thirdSize <<endl;

    //initialising all locations with 0
    int fourth[10] = {0};

    n = 10;
    //printArray(fourth, 10);

    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

    n = 10;
    //printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<" Size of Fifth is " << fifthSize <<endl;
    

    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];


    cout << endl << " Everything is Fine " << endl << endl;

    return 0;
}
