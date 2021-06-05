#include <iostream>
using namespace std;

int countPaths(int n , int dp[]){
    // write your code here
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    int p1 = countPaths(n-1,dp);
    int p2 = countPaths(n-2,dp);
    int p3 = countPaths(n-3,dp);

    int rres = p1 + p2 + p3;
    dp[n] = rres;
    return rres;
}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        arr[i]=0;
    }
    cout<<countPaths(n,arr)<<endl;
    return 0;
}  