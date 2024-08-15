/* 
we are gonna apply binary search on the array 
for 
 if(arr[mid] == key){
            ans = mid;
            e = mid - 1;//this is for finding the first occurence as if the number equals mid and 
            if it has occured before we do mid-1 to search in left part of the array to see if 
            it has occured before and that should be its first occ 
            similarly with 
              if(arr[mid] == key){
            ans = mid;
            s = mid + 1; 
            we did mid+1 coz it will give us a occurence of the element if it equals mid after that
            and that should be its last occ 
            and we have applied binary search accd
        }   
*/
#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}
