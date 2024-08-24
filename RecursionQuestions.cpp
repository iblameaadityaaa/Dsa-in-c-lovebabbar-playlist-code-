#include<iostream>
using namespace std;
void reverse(string&str,int i,int j){
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
//palindrome checking using recursion 
bool checkPalindrome(string str,int i, int j){
    if(i>j){
        return true;
    }
    else{
        checkPalindrome(str,i+1,j-1);
    }
}
