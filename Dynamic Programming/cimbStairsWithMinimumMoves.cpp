//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-minimum-moves-official/ojquestion
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int moves[n];
    for(int i = 0;i<n;i++){
        cin>> moves[i];
    }
    int dp[n+1];
    for(int i = 0;i<=n;i++) dp[i] = 0;
    
    dp[n]=1;
    
    for(int i = n-1;i>=0;i--){
        int m = INT_MAX;
        for(int j = moves[i];j>0;j--){
            if(i+j<=n && dp[i+j]!=0){
                 m = min(m,dp[i+j]);
            }
        }
        
        if(m==INT_MAX) dp[i]=0;
        
        else dp[i] = (m+1);
    }
        // for(int i = 0;i<=n;i++) cout<<dp[i]<<" ";

    cout<<dp[0]-1<<endl;
}