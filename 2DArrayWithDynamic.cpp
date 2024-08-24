#include <iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int column;
    cin>>column;

    //creating a 2D Array
    int** arr=new int*[row];
    for(int i=0; i<row ; i++){
        arr [i]=new int [column];
    }
    cout<<endl;
    //taking input 
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}
