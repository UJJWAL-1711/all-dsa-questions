https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-variable-jumps-official/ojquestion#!
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    int dp[n+1];
    dp[n]=1;
    for(int i = 0 ; i < n ;i++) {
        dp[i] = 0;
    }
    
    for(int i = n-1;i>=0;i--){
        for(int j = arr[i];j>0;j--){
            if(i+j <= n){
                // cout<<i<<" "<<endl;
                dp[i] += dp[i+j];
                // cout<<"dp"<<i<<" = "<<"dp"<<i+j<<endl;

            }
        }
    }
    cout<<dp[0]<<endl;
    //     for(int i = 0 ; i < n ;i++) {
    //     cout<<dp[i]<<endl;
    // }
    return 0;
}

// 1. You are given a number n, representing the number of stairs in a staircase.
// 2. You are on the 0th step and are required to climb to the top.
// 3. You are given n numbers, where ith element's value represents - till how far from the step you could jump to in a single move. You can of course jump fewer number of steps in the move.
// 4. You are required to print the number of different paths via which you can climb to the top.
