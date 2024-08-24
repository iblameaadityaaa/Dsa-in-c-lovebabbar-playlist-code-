#include<iostream>
using namespace std;
int getSum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}
//sorted array by recursion 
bool isSorted(int arr[],int size){
    if (size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart(arr+1,size-1);
        return remainingPart;
    }
}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}

//linear search using recursion 
void print(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}
bool linearSearch(int arr[],int size, int k){
    print(arr,size);
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}
//binary search using recursion 
void print(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}
bool binarySearch(int *arr, int s, int e , int k){
    //base case

    //element not found 
    if(s>e){
        return false;
    }
    int mid=s+{e-s}/2;
    //element found 
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}