#include<iostream>
using namespace std;
void SayDigit(int n,string arr[]){
    //base case
    if(n==0){
        return ;
    }
    //processing 
    int digit=n%10;
    n=n/10;
    //recursive call
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";

    int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}
}
