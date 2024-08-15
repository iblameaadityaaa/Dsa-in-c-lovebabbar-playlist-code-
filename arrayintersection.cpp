#include<vector>
using namespace std;
/*
we are gonna traverse both of the arrays and gonna check if element equals to the elements of arrays 
and then we update it as int min and break.

*/
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
  for(int i=0; i<n; i++){
    element=arr[i];
     for(int j=0; j<m; j++){
        if(arr[i]==arr[j]){
             vector.push_back(element);
		   arr[2]=INT_MIN;
		     break;
	}
     }
