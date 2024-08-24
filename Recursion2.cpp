#include<iostream>
using namespace std;
void reachHome(int src,int dest){
    //base case
    if(src==dest){
        cout<<"reached"<<endl;
        return;
    }
    //processing 
    src++;
    //recursive call
    reachHome(src,dest);

}

//climbs stairs problem 
int countDistinctWayToClimbStair(long long nStairs){
    //base case
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    //recursive call
    int ans= countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;   
}