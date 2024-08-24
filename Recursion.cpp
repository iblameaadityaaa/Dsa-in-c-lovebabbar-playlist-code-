#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int smallerProblem=factorial(n-1);
    int biggerProblem=n*smallerProblem;
    return biggerProblem;
}
int power(int n){
    if(n==0){
        return 1;
    int smallerProb=power(n-1);
    int biggerProb=2*power(n-1);
    return biggerProb;
    }
}
int main(){
    int s=factorial(5);
    int f=power(2);
    cout<<s<<endl;
    cout<<f<<endl;
}
